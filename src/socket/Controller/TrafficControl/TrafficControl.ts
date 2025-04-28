import { Socket } from "socket.io-client";
import * as rclnodejs from 'rclnodejs';
import { allowPath$, isLocationIdAndIsAllow, sendIsArriveLocation, sendIsLeaveLocation, sendReachGoal, shortestPath$, startOneTermAllowPath$ } from "./action";
import { filter, Subject, Subscription, switchMap, take, tap } from "rxjs";
import { Output as MCOutput, TEST, CANCEL_MISSION } from "../../../actions/missionOutput";
import { ofType } from "../../../helpers/operators";
import { TrafficBehavior } from "../../../ros";

type Input = MCOutput<typeof TEST | typeof CANCEL_MISSION>;

class TrafficControl {
    private input$: Subject<Input>;
    private trafficService: TrafficBehavior;
    private targetLoc: string = '';
    private getArriveLoc$: Subscription | null = null;
    private getLeaveLoc$: Subscription | null = null;
    private lastShortestPath: string[] = [];
    private subscriptions$: Subscription[] = [];
    constructor(private socket: Socket, private node: rclnodejs.Node) {
        this.input$ = new Subject();
        this.trafficService = new TrafficBehavior(this.node, this.socket);
        this.activate()
    }

    /** 
     * 註冊時會訂閱的一次性 Subscription 用於等待車輛回應以抵達註冊點
    */
    private getOneTermAllowPath() {
        return startOneTermAllowPath$(this.socket).
            pipe(
                tap((data) => { console.log(data) }),
                switchMap(() => {
                    this.node.getLogger().info("Start wait arriving");
                    return this.trafficService.getArriveTarget().pipe(take(1))
                })).subscribe(({ data }) => {
                    this.node.getLogger().info(`Arrive location ${data.locationId} is recevied successful`);
                    if (data.isArrive) {
                        sendIsArriveLocation(data, this.socket)
                        sendReachGoal(data.locationId, this.socket)
                        this.targetLoc = ''
                        this.lastShortestPath = []
                    }
                })
    }

    /** 
     * 接收最短路徑 Subscription 
    */
    private getShortestPath() {
        return shortestPath$(this.socket).pipe(tap(({ shortestPath }) => {
            this.lastShortestPath = shortestPath
            this.targetLoc = shortestPath[shortestPath.length - 1];
            return;
        })).subscribe(({ shortestPath }) => {
            this.trafficService.sendShortestPath(shortestPath);
        })
    }


    /** 通行權 (isAllow: true/false) Subscription */
    private getIsAllowTarget() {
        return allowPath$(this.socket).pipe(filter(isLocationIdAndIsAllow))
            .subscribe((allowTarget) => {
                if (allowTarget.isAllow) {
                    this.getArriveLoc$ = this.trafficService.getArriveTarget().pipe(take(1))
                        .subscribe(({ data }) => {
                            this.node.getLogger().info(`Arrive location ${data.locationId} is recevied successful`);
                            sendIsArriveLocation(data, this.socket);
                            if (this.targetLoc === data.locationId) {
                                sendReachGoal(this.targetLoc, this.socket);
                                this.targetLoc = '';
                            }
                        });
                    if (this.targetLoc !== allowTarget.locationId) {
                        this.getLeaveLoc$ = this.trafficService.getLeaveLoc()
                            .pipe(
                                filter(({ data }) => {
                                    console.log(data)
                                    return data.locationId === allowTarget.locationId
                                }),
                                take(1)
                            )
                            .subscribe(({ data }) => {
                                if (!this.lastShortestPath.length) return;
                                sendIsLeaveLocation({ locationId: data.locationId }, this.socket)
                            })
                    }
                }
                this.trafficService.sendIsAllow(
                    {
                        locationId: allowTarget.locationId,
                        isAllow: allowTarget.isAllow
                    }
                )
            })
    }

    private inputEvent() {
        return this.input$.subscribe((action) => {
            switch (action.type) {
                case CANCEL_MISSION:
                    if (!this.getArriveLoc$?.closed) {
                        this.getArriveLoc$?.unsubscribe();
                    }
                    if (this.getLeaveLoc$?.closed) {
                        this.getLeaveLoc$.unsubscribe()
                    }
                    break;
                default:
                    break;
            }
        })
    }

    public next(action: Input) {
        this.input$.next(action);
    }

    private activate() {
        this.subscriptions$.push(this.getOneTermAllowPath());
        this.subscriptions$.push(this.getShortestPath());
        this.subscriptions$.push(this.getIsAllowTarget());
        this.subscriptions$.push(this.inputEvent());
    }
}

export default TrafficControl

