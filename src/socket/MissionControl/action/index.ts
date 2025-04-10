import { fromEventPattern, share } from 'rxjs';
import { Socket } from 'socket.io-client';


// The Observable is to wait for mission dispatch.
export const sendMission$ = (socket: Socket) => {
    return fromEventPattern<{ status: string }>((next) => {
        socket.on('write-status', next);
    }).pipe(share())
}

// The Observable is to cancel mission.
export const cancelMissionMission$ = (socket: Socket) => {
    return fromEventPattern<{ id: string }>((next) => {
        socket.on('write-cancel', next);
    }).pipe(share())
}