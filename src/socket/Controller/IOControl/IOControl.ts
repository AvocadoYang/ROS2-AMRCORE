import * as rclnodejs from 'rclnodejs';
import { Socket } from 'socket.io-client';


class IOControl {
    private _node: rclnodejs.Node;
    constructor(node: rclnodejs.Node, private socket: Socket) {
        this._node = node

    }
}