import { Socket } from 'socket.io-client';
import * as rclnodejs from 'rclnodejs';
import { MissionActionClient } from "../../ros";
import { SendMission } from './action';

class MissionControl {
    private lastSendGoalID: string;
    private missionCancelFlag: boolean
    private missionAcitonClient: MissionActionClient;
    private socket: Socket;
    constructor(socket: Socket, node: rclnodejs.Node) {
        this.lastSendGoalID = '';
        this.socket = socket;
        this.missionCancelFlag = false;
        this.missionAcitonClient = new MissionActionClient(node);
    }

    public senMission() {
        SendMission(this.socket, this.lastSendGoalID).subscribe((mission) => {
            this.missionAcitonClient.sendMission(mission)
        });
    }

    public cancelMission() {
        if (!this.lastSendGoalID) return;
    }


}

export default MissionControl;