import { Socket } from 'socket.io-client';
import { filter, map, Subject, Subscription, tap } from "rxjs";
import * as rclnodejs from 'rclnodejs';
import { MissionBehavior } from "../../../ros";
import { sendMission$, cancelMissionMission$ } from './action';
import { Output, sendTest, sendCancelMission } from '../../../actions/missionOutput';
import { Mission_Payload } from './type';

class MissionControl {
    private output$: Subject<Output>;
    private lastSendGoalID: string;
    private socket: Socket;
    private RxSubscription: Subscription[] = [];
    private missionAcitonClient: MissionBehavior;

    constructor(socket: Socket, node: rclnodejs.Node) {

        this.output$ = new Subject();
        this.lastSendGoalID = '';
        this.socket = socket;
        this.missionAcitonClient = new MissionBehavior(node, socket);

        this.activate()
    }

    private sendMission() {
        return sendMission$(this.socket).pipe(
            map(({ status }) => {
                return JSON.parse(status) as Mission_Payload;
            }),
            filter((mission) => this.lastSendGoalID !== mission.Id),
            tap((mission) => {
                this.lastSendGoalID = mission.Id
            })).subscribe(async (mission) => {
                await this.missionAcitonClient.sendMission(mission)
            });
    }

    private cancelMission() {
        return cancelMissionMission$(this.socket)
            .subscribe(async ({ id: goalId }) => {
                if (this.lastSendGoalID !== goalId) return;
                this.output$.next(sendCancelMission({ goadId: goalId }))
                await this.missionAcitonClient.cancelMission(goalId)
            })
    }

    public test() {
        this.output$.next(sendTest({ test: 'hello world' }))
    }

    public subsribe(cb: (action: Output) => void) {
        return this.output$.subscribe(cb)
    }


    public activate() {
        this.RxSubscription.push(this.sendMission());
        this.RxSubscription.push(this.cancelMission())
    }

    public deactivate() {
        if (!this.RxSubscription.length) return;
        this.RxSubscription.forEach((sub) => {
            if (!sub.closed) {
                sub.unsubscribe()
            }
        })
    }


}

export default MissionControl;
