import * as rclnodejs from 'rclnodejs';
import { FeedBackType } from './type';
import { Mission_Payload } from '../socket/MissionControl/type';

const MissionAction = rclnodejs.require('humanoid_pkg/action/Mission');
class MissionActionClient {
    private _actionClient: rclnodejs.ActionClient<any>;
    private _node: rclnodejs.Node;
    private goalHandle: rclnodejs.ClientGoalHandle<any> | undefined;
    constructor(node: rclnodejs.Node) {
        this._node = node
        this._actionClient = new rclnodejs.ActionClient(
            node,
            'humanoid_pkg/action/Mission',
            "/fleet_manager/mission"
        )
    }
    public async sendMission(mission: Mission_Payload) {
        this._node.getLogger().info('Waiting for action server...');
        await this._actionClient.waitForServer();

        const goal = new MissionAction.Goal()
        goal.request_json = JSON.stringify(mission);

        this._node.getLogger().info('Sending goal request...');

        this.goalHandle = await this._actionClient.sendGoal(goal, (feedback) =>
            this.feedbackCallback(feedback)
        );

        if (!this.goalHandle.isAccepted()) {
            this._node.getLogger().info('Goal rejected');
            return;
        }

        const result = await this.goalHandle.getResult();
        this._node.getLogger().info('Goal accepted');

        if (this.goalHandle.isSucceeded()) {
            this._node
                .getLogger()
                .info(`Goal suceeded with result: ${result.sequence}`);
        } else {
            this._node.getLogger().info(`Goal failed`);
        }
    }

    public async cancelMission() {
        this._node.getLogger().info('Canceling goal');
        if (!this.goalHandle) return;

        const response = await this.goalHandle.cancelGoal();

        if (response.goals_canceling.length > 0) {
            this._node.getLogger().info('Goal successfully canceled');
        } else {
            this._node.getLogger().info('Goal failed to cancel');
        }
    }

    private feedbackCallback(feedback: FeedBackType) {
        this._node.getLogger().info(`Received feedback: ${feedback}`);
    }
}


export default MissionActionClient;