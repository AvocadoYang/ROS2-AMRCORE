import { Socket } from "socket.io-client";
import * as rclnodejs from 'rclnodejs';
import { startOneTermAllowPath$ } from "./action";
import { switchMap, tap } from "rxjs";

class TrafficControl {
    constructor(private socket: Socket, private node: rclnodejs.Node) {

    }

    private startOneTermAllowPath() {
        // return startOneTermAllowPath$(this.socket).
        //     pipe(switchMap(() => {
        //         this.node.getLogger().info("Start wait arriving");

        //     }))
    }
}