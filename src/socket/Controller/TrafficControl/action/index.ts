import { fromEventPattern, share } from "rxjs";
import { Socket } from "socket.io-client";


export const startOneTermAllowPath$ = (socket: Socket) => {
    return fromEventPattern<{ amrId: string, start: boolean }>(
        (next) => socket.on('start-initial', next),
    ).pipe(share());
}

export const shortestPath$ = (socket: Socket) => {
    return fromEventPattern<{ shortestPath: string[] }>(
        (next) => socket.on('shortest-path', next),
    ).pipe(share());
}

export function sendIsArriveLocation(arriveMsg: {
    locationId: string;
    isArrive: boolean;
}, socket: Socket) {
    console.log(`🚩 location ${arriveMsg.locationId} is arriving `)
    socket.emit('arrive-loc', arriveMsg);
}


export function sendShortestIsReceived(result: boolean, socket: Socket) {
    socket.volatile.emit('receive-shortestPath', { result });
}


export function sendReachGoal(locationId: string, socket: Socket) {
    socket.emit('reach-goal', { locationId });
}
