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
export const allowPath$ = (socket: Socket) => {
    return fromEventPattern<{
        locationId: string;
        isAllow: boolean;
    }>((next) => socket.on('allow-path', next)).pipe(share());
}

export function sendIsArriveLocation(arriveMsg: {
    locationId: string;
    isArrive: boolean;
}, socket: Socket) {
    console.log(`🚩 location ${arriveMsg.locationId} is arriving `)
    socket.emit('arrive-loc', arriveMsg);
}

export function sendIsLeaveLocation(isAwayMsg: { locationId: string }, socket: Socket) {
    socket.emit('leave-location', isAwayMsg)
}



export function sendShortestIsReceived(result: boolean, socket: Socket) {
    console.log(result, '????????????????')
    socket.volatile.emit('receive-shortestPath', { result });
}


export function sendReachGoal(locationId: string, socket: Socket) {
    socket.emit('reach-goal', { locationId });
}


export function isLocationIdAndIsAllow(obj: {
    locationId: string;
    isAllow: boolean;
}): obj is { locationId: string; isAllow: boolean } {
    return (
        obj &&
        typeof obj.locationId === 'string' &&
        typeof obj.isAllow === 'boolean'
    );
}
