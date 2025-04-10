import configs from '../configs';
import {interval} from "rxjs";
import { fakeIoInfo } from '../mock'
import * as rclnodejs from 'rclnodejs';
import { io, Socket } from 'socket.io-client';
import MissionControl from './MissionControl/MissionControl';

let socket: Socket
const init = (node: rclnodejs.Node) => {
    const url = `wss://${configs.MISSION_CONTROL_HOST}:${configs.MISSION_CONTROL_PORT}/amr`;
    socket = io(url, {
        query: { serialNumber: configs.MAC_ADDRESS }, secure: true,
        rejectUnauthorized: false,
    });
    const missionControl = new MissionControl(socket, node)
    socket.on("connect", () => {
       missionControl.sendMission();
       interval(100).subscribe(() => {
          socket.emit('io-info', { msg: { ...fakeIoInfo } })
    });
    })
}



export default init;
