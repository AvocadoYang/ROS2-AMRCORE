import { Socket } from 'socket.io-client';
import { filter, map, Subscription, tap } from "rxjs";
import * as rclnodejs from 'rclnodejs';
import { missionBehavior } from "../../ros";
import { sendMission$, cancelMissionMission$ } from './action';
import { Mission_Payload } from './type';

class MissionControl {
    private lastSendGoalID: string;
    private missionAcitonClient: missionBehavior;
    private socket: Socket;
    private RxSubscription: Subscription[] = [];

    constructor(socket: Socket, node: rclnodejs.Node) {
        this.lastSendGoalID = '';
        this.socket = socket;
        this.missionAcitonClient = new missionBehavior(node, socket);
    }

    private sendMission() {
        return sendMission$(this.socket).pipe(
            map(({ status }) => {
                return JSON.parse(status) as Mission_Payload;
            }),
            filter((mission) => this.lastSendGoalID !== mission.Id),
            tap((mission) => {
                this.lastSendGoalID = mission.Id
            })).subscribe((mission) => {
                this.missionAcitonClient.sendMission(mission)
            });
    }

    private cancelMission() {
        return cancelMissionMission$(this.socket)
            .subscribe(({ id: goalId }) => {
                if (this.lastSendGoalID !== goalId) return;
                this.missionAcitonClient.cancelMission(goalId)
            })
    }

    public subscribe() {
        this.RxSubscription.push(this.sendMission());
        this.RxSubscription.push(this.cancelMission())
    }

    public unsubscribe() {
        if (!this.RxSubscription.length) return;
        this.RxSubscription.forEach((sub) => {
            if (!sub.closed) {
                sub.unsubscribe()
            }
        })
    }

}

export default MissionControl;
