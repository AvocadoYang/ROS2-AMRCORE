import * as rclnodejs from 'rclnodejs';
import { IsArrive, isAway } from './type';
import configs from '../configs';
import { Socket } from 'socket.io-client';
import { fromEventPattern, map, Observable } from 'rxjs';
import { sendShortestIsReceived } from '../socket/Controller/TrafficControl/action';


class TrafficBehavior {
    private _shortestPathServiceClient: rclnodejs.Client<'humanoid_pkg/srv/ShortestPath'>
    private _isAllowServiceClient: rclnodejs.Client<'humanoid_pkg/srv/TrafficStatus'>
    private isArriveTopic$: Observable<IsArrive>
    private leaveLoactionTopic$: Observable<isAway>
    private _node: rclnodejs.Node;

    constructor(node: rclnodejs.Node, private socket: Socket) {
        this._node = node;

        this._shortestPathServiceClient = this._node.createClient(
            'humanoid_pkg/srv/ShortestPath',
            `kenmec_${configs.AMR_TYPE}_socket/shortest_path`,
        )

        this._isAllowServiceClient = this._node.createClient(
            'humanoid_pkg/srv/TrafficStatus',
            `/fleet_manager/allow_path`,
        )

        this.isArriveTopic$ = fromEventPattern<IsArrive>((next) => {
            this._node
                .createSubscription(
                    'std_msgs/msg/String',
                    `/kenmec_${configs.AMR_TYPE}/navigation/is_arrive`,
                    next
                );
        })

        this.leaveLoactionTopic$ = fromEventPattern<isAway>((next) => {
            this._node.createSubscription(
                'std_msgs/msg/String',
                `/kenmec_${configs.AMR_TYPE}/navigation/is_away`,
                next
            )
        })

    }


    public getArriveTarget() {
        return this.isArriveTopic$
    }

    public getLeaveLoc() {
        return this.leaveLoactionTopic$
    }

    public sendShortestPath(shortestPath: string[]) {
        this._shortestPathServiceClient.sendRequest({ shortest_path: shortestPath }, (res) => {

            if (res.result) {
                sendShortestIsReceived(res.result, this.socket)
            }
        })
    }

    public sendIsAllow(allowResource: { locationId: string, isAllow: boolean }) {
        this._isAllowServiceClient.sendRequest({ location_id: allowResource.locationId, is_allow: allowResource.isAllow }, (res) => {
            console.log(res.result)
        })
    }

}


export default TrafficBehavior;
