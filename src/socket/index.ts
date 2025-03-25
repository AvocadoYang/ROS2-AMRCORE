import configs from '../configs'
import * as rclnodejs from 'rclnodejs';
import { io, Socket } from 'socket.io-client';
import { dispatchMission } from './dispachMission/dispatchMission';

let socket: Socket
const init = (node: rclnodejs.Node) => {
    const url = `wss://${configs.MISSION_CONTROL_HOST}:${configs.MISSION_CONTROL_PORT}/amr`;
    socket = io(url, {
        query: { serialNumber: configs.MAC_ADDRESS }, secure: true,
        rejectUnauthorized: false,
    });


    const dispatchMission$ = dispatchMission(socket, node);
}



export default init;