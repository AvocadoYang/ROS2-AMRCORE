
import * as https from 'https';
import * as fs from 'fs';
import { Socket, Server as SocketIOServer } from 'socket.io';
import chalk from 'chalk';
import configs from '../configs'
import * as path from 'path';
import { firstValueFrom, fromEventPattern, takeUntil, takeWhile } from 'rxjs';



const key = path.resolve(__dirname, './server.key');
const crt = path.resolve(__dirname, './server.crt');


const httpsOptions = {
    key: fs.readFileSync(key),
    cert: fs.readFileSync(crt),
};


const server = https.createServer(httpsOptions).listen(configs.MISSION_CONTROL_PORT);

server.on('listening', () => {
    console.log(
        chalk.green(
            `Web server listening at https://${configs.MISSION_CONTROL_HOST}:${configs.MISSION_CONTROL_PORT}`,
        ),
    );
});

const io = new SocketIOServer(server, {
    cors: { origin: '*' },
});




export const register = () => {
    io.of('/amr').on('connection', async (socket) => {
        socket.emit('start-initial', { amrId: "anfa-ps14-001", start: true });

        socket.emit('shortest-path', { shortestPath: ['1'] });

        const reciveShortestPath = await firstValueFrom<{ result: boolean }>(
            fromEventPattern(
                (next) => socket.on('receive-shortestPath', next)
            )
        )

        if (!reciveShortestPath.result) return;

        const response = await firstValueFrom<{ loctionId: string }>(
            fromEventPattern(
                (next) => socket.on('reach-goal', next)
            )
        )

        if (!response) return;

        moveFlow(socket);


    });

}

const moveFlow = async (socket: Socket) => {

    let shortestPath: string[] = [];

    socket.emit('shortest-path', { shortestPath: ['1, 2, 3, 4, 5'] });

    const reciveShortestPath = await firstValueFrom<{ result: boolean }>(
        fromEventPattern(
            (next) => socket.on('receive-shortestPath', next)
        )
    )

    if (!reciveShortestPath.result) return;

    shortestPath = ['1, 2, 3, 4, 5'];

    while (shortestPath.length > 0) {
        const targetLoc = shortestPath.shift() as string;

        let seed = Math.floor(Math.random() * 2);
        if (seed) {
            socket.emit('allow-path', { locationId: targetLoc, isAllow: true });
        } else {
            socket.emit('allow-path', { locationId: targetLoc, isAllow: false });
            shortestPath.unshift(targetLoc);
            continue;
        }

        const isArrive = await firstValueFrom(
            fromEventPattern<{ locationId: string, isArrive: boolean }>(
                (next) => socket.on('arrive-loc', next)
            ).pipe(takeWhile((res) => res.isArrive))
        );

        console.log(`arrive location ${targetLoc}`)


    }

}