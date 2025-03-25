import * as rclnodejs from 'rclnodejs';
import { FeedBackType } from './type';

const MissionAction = rclnodejs.require('humanoid_amr_core_pkg/action/Mission');
class MissionActionClient {
    private _actionClient: rclnodejs.ActionClient<any>;
    private _node: rclnodejs.Node;
    constructor(node: rclnodejs.Node) {
        this._node = node
        this._actionClient = new rclnodejs.ActionClient(
            node,
            'humanoid_amr_core_pkg/action/Mission',
            "/fleet_manager/mission"
        )
    }
    public async sendMission() {
        this._node.getLogger().info('Waiting for action server...');
        await this._actionClient.waitForServer();

        const goal = new MissionAction.Goal()
        this._node.getLogger().info('Sending goal request...');

        const goalHandle = await this._actionClient.sendGoal(goal, (feedback) =>
            this.feedbackCallback(feedback)
        );

        if (!goalHandle.isAccepted()) {
            this._node.getLogger().info('Goal rejected');
            return;
        }

        const result = await goalHandle.getResult();
        this._node.getLogger().info('Goal accepted');

        if (goalHandle.isSucceeded()) {
            this._node
                .getLogger()
                .info(`Goal suceeded with result: ${result.sequence}`);
        } else {
            this._node.getLogger().info(`Goal failed`);
        }
        // rclnodejs.shutdown();
    }

    private feedbackCallback(feedback: FeedBackType) {
        this._node.getLogger().info(`Received feedback: ${feedback}`);
    }
}


export default MissionActionClient;