import { fromEventPattern, share, tap, filter, map } from "rxjs";
import { Socket } from 'socket.io-client';
import { Mission_Payload } from "../type";

const sendMission = (socket: Socket, lastSendGoalID: string) => {
    return fromEventPattern<{ status: string }>((next) => {
        socket.on('write-status', next);
    }).pipe(share()).pipe(
        map(({ status }) => {
            return JSON.parse(status) as Mission_Payload;
        }),
        filter((mission) => lastSendGoalID !== mission.Id),
        tap((mission) => {
            lastSendGoalID = mission.Id
        }))
}

export default sendMission