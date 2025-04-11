import configs from '../configs';
import * as rclnodejs from 'rclnodejs';
import { io, Socket } from 'socket.io-client';
import { MissionControl, TrafficControl } from './Controller';
import { TEST } from '../actions/missionOutput';
import { interval } from 'rxjs';


class SocketConnect {
    private socket: Socket;
    private MC: MissionControl;
    private TC: TrafficControl;


    constructor(node: rclnodejs.Node) {
        const url = `wss://${configs.MISSION_CONTROL_HOST}:${configs.MISSION_CONTROL_PORT}/amr`;
        this.socket = io(url, {
            query: { serialNumber: configs.MAC_ADDRESS }, secure: true,
            rejectUnauthorized: false,
        });
        this.MC = new MissionControl(this.socket, node);

        this.TC = new TrafficControl(this.socket, node);
        this.socket.on("connect", () => {
        })

        this.socket.on("disconnect", () => {
            // if (this.missionControl) {
            //     this.missionControl.deactivate()
            //     this.missionControl = null;
            // }
        })

        this.MC.subsribe((action) => {
            switch (action.type) {
                case TEST:
                    this.TC.next(action)
                    break;
                default:
                    break;
            }

        })
    }
}



export default SocketConnect;
