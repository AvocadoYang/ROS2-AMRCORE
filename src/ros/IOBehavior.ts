import * as rclnodejs from 'rclnodejs';
import { fromEventPattern, Observable } from 'rxjs';
import { Socket } from 'socket.io-client';
class IOBehavior {
    private _node: rclnodejs.Node;
    private getIOInfo$: Observable<string>;
    constructor(node: rclnodejs.Node, private socket: Socket) {
        this._node = node;

        this.getIOInfo$ = fromEventPattern<string>((next) => {
            this._node.createSubscription(
                'std_msgs/msg/String',
                `/kenmec_${process.env.CAR}/io_info`,
                next
            )
        })
    }

    public getIOInfo() {
        return this.getIOInfo$;
    }


}


export default IOBehavior;