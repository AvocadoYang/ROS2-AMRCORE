import * as rclnodejs from 'rclnodejs';
import { FeedBackType } from './type';
import configs from '../configs';
import { Mission_Payload } from '../socket/Controller/MissionControl/type';
import { Socket } from 'socket.io-client';


class TrafficBehavior {
    private _shortestPathServiceClient: rclnodejs.Client<'humanoid_pkg/srv/ShortestPath'>
    private _node: rclnodejs.Node;
    private goalHandle: rclnodejs.ClientGoalHandle<any> | undefined;
    private lastGoalId: string = '';

    constructor(node: rclnodejs.Node, private socket: Socket) {
        this._node = node

        this._shortestPathServiceClient = this._node.createClient(
            'humanoid_pkg/srv/ShortestPath',
            `kenmec_${configs.AMR_TYPE}_socket/shortest_path`,
        )
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


export default TrafficBehavior;
