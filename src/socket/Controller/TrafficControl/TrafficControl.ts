import { Socket } from "socket.io-client";
import * as rclnodejs from 'rclnodejs';
import { sendIsArriveLocation, sendReachGoal, shortestPath$, startOneTermAllowPath$ } from "./action";
import { Subject, Subscription, switchMap, take, tap } from "rxjs";
import { Output as MCOutput, TEST } from "../../../actions/missionOutput";
import { ofType } from "../../../helpers/operators";
import TrafficBehavior from "../../../ros/trafficBehavior";

type Input = MCOutput<typeof TEST>;

class TrafficControl {
    private input$: Subject<Input>;
    private trafficService: TrafficBehavior;
    private lastShortestPath: string[] = [];
    private subscriptions$: Subscription[] = [];
    constructor(private socket: Socket, private node: rclnodejs.Node) {
        this.input$ = new Subject();
        this.trafficService = new TrafficBehavior(this.node, this.socket);
    }

    /** 註冊時會訂閱的一次性 Subscription
        *  用於等待車輛回應以抵達註冊點
    */
    private getOneTermAllowPath() {
        return startOneTermAllowPath$(this.socket).
            pipe(switchMap(() => {
                this.node.getLogger().info("Start wait arriving");
                return this.trafficService.getArriveTarget().pipe(take(1))
            })).subscribe(({ data }) => {
                this.node.getLogger().info(`Arrive location ${data.locationId} is recevied successful`);
                if (data.isArrive) {
                    sendIsArriveLocation(data, this.socket)
                    sendReachGoal(data.locationId, this.socket)
                }
            })
    }

    private getShortestPath() {
        return shortestPath$(this.socket).pipe(tap(({ shortestPath }) => {
            this.lastShortestPath = shortestPath
            return;
        })).subscribe(({ shortestPath }) => {

        })
    }



    public next(action: Input) {
        this.input$.next(action);
    }

    private activate() {
        this.subscriptions$.push(this.getOneTermAllowPath());
    }
}

export default TrafficControl