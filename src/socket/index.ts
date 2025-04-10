import configs from '../configs';
import * as rclnodejs from 'rclnodejs';
import { io, Socket } from 'socket.io-client';
import MissionControl from './MissionControl/MissionControl';


class SocketConnect {
    private socket: Socket;
    private missionControl: MissionControl | null = null;

    constructor(node: rclnodejs.Node) {
        const url = `wss://${configs.MISSION_CONTROL_HOST}:${configs.MISSION_CONTROL_PORT}/amr`;
        this.socket = io(url, {
            query: { serialNumber: configs.MAC_ADDRESS }, secure: true,
            rejectUnauthorized: false,
        });

        this.socket.on("connect", () => {
            this.missionControl = new MissionControl(this.socket, node);
            this.missionControl.subscribe()
        })

        this.socket.on("disconnect", () => {
            if (this.missionControl) {
                this.missionControl.unsubscribe()
                this.missionControl = null;
            }
        })
    }
}



export default SocketConnect;
