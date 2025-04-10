import * as rclnodejs from 'rclnodejs';
import { FeedBackType } from './type';
import { Mission_Payload } from '../socket/MissionControl/type';
import { Socket } from 'socket.io-client';

const MissionAction = rclnodejs.require('humanoid_pkg/action/Mission');
class missionBehavior {
    private _actionClient: rclnodejs.ActionClient<any>;
    private _node: rclnodejs.Node;
    private goalHandle: rclnodejs.ClientGoalHandle<any> | undefined;
    private lastGoalId: string = '';

    constructor(node: rclnodejs.Node, private socket: Socket) {
        this._node = node
        this._actionClient = new rclnodejs.ActionClient(
            node,
            'humanoid_pkg/action/Mission',
            "/fleet_manager/mission"
        )
    }

    public async sendMission(mission: Mission_Payload) {
        this._node.getLogger().info('Waiting for action server...');
        await this._actionClient.waitForServer(5000);

        const goal = new MissionAction.Goal()
        goal.request_json = JSON.stringify(mission);

        this._node.getLogger().info('Sending goal request...');
        this.lastGoalId = mission.Id;

        this.goalHandle = await this._actionClient.sendGoal(goal,
            (feedback) => this.feedbackCallback(feedback),
            mission.Id as unknown as rclnodejs.unique_identifier_msgs.msg.UUID
        )

        if (!this.goalHandle.isAccepted()) {
            this._node.getLogger().info('Goal rejected');
            return;
        }

        const result = await this.goalHandle.getResult();
        this._node.getLogger().info('Goal accepted');

        if (this.goalHandle.isSucceeded()) {
            this._node
                .getLogger()
                .info(`Goal suceeded with result: ${result}`);
        } else {
            this._node.getLogger().info(`Goal failed`);
        }
    }

    public async cancelMission(goalId: string) {
        this._node.getLogger().info('Canceling goal');
        if (!this.goalHandle) return;
        if (!this.lastGoalId || (this.lastGoalId !== goalId)) return;
        try {
            const response = await this.goalHandle.cancelGoal();

            if (response.goals_canceling.length > 0) {
                this._node.getLogger().info('Goal successfully canceled');
            } else {
                this._node.getLogger().info('Goal failed to cancel');
            }

        } catch (err) {
            this._node.getLogger().error(JSON.stringify(err))
        }
    }


    /** 任務中回傳值 Action Feedback
       * Feedback Content: 
            {
                feedback_json: '{"current_status": 9, "warning_msg": "", "task_status": true, "cancel_status": false}'
            }
       */
    private feedbackCallback(feedback: FeedBackType) {
        const stringfyFeedback = JSON.stringify(feedback);
        // this._node.getLogger().info(`Received feedback: ${JSON.stringify(feedback)}`);
        this.socket.volatile.emit('writeStatus-feedback', { feedback: stringfyFeedback })
    }
}


export default missionBehavior;
