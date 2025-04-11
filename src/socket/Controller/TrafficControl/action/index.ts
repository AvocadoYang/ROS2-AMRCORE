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