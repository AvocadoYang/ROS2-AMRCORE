import { fromEventPattern, share, tap, filter, map } from "rxjs";
import { Socket } from 'socket.io-client';
import { Mission_Payload } from "./type";
import * as rclnodejs from 'rclnodejs';
import { MissionActionClient } from "../../ros";

export const dispatchMission = (socket: Socket, node: rclnodejs.Node) => {
    const missionAcitonClient = new MissionActionClient(node);
    let lastSendGoadID: string = '';

    return fromEventPattern<{ status: string }>((next) => {
        socket.on('write-status', next);
    }).pipe(share()).pipe(
        map(({ status }) => {

            return JSON.parse(status) as Mission_Payload;
        }),
        filter((mission) => lastSendGoadID !== mission.Id),
        tap((mission) => {
            lastSendGoadID = mission.Id
        }))
        .subscribe((data) => {

            // console.log(data)
        })
}