import * as rclnodejs from 'rclnodejs';
import { FeedBackType, IsArrive } from './type';
import configs from '../configs';
import { Mission_Payload } from '../socket/Controller/MissionControl/type';
import { Socket } from 'socket.io-client';
import { fromEventPattern, map, Observable } from 'rxjs';
import { sendShortestIsReceived } from '../socket/Controller/TrafficControl/action';


class TrafficBehavior {
    private _shortestPathServiceClient: rclnodejs.Client<'humanoid_pkg/srv/ShortestPath'>
    private isArriveTopic$: Observable<IsArrive>
    private _node: rclnodejs.Node;

    constructor(node: rclnodejs.Node, private socket: Socket) {
        this._node = node;

        this._shortestPathServiceClient = this._node.createClient(
            'humanoid_pkg/srv/ShortestPath',
            `kenmec_${configs.AMR_TYPE}_socket/shortest_path`,
        )

        this.isArriveTopic$ = fromEventPattern<IsArrive>((next) => {
            node.createSubscription('std_msgs/msg/String', '/try', next);
        })

    }


    public getArriveTarget() {
        return this.isArriveTopic$
    }

    public sendShortestPath(shortestPath: string[]) {
        this._shortestPathServiceClient.sendRequest({ shortest_path: shortestPath }, (res) => {
            console.log(`Result: ${res.result}@@@@@@`)
            if (res.result) {
                sendShortestIsReceived(res.result, this.socket)
            }
        })
    }

}


export default TrafficBehavior;
