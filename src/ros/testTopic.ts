import * as rclnodejs from 'rclnodejs';
import { FeedBackType } from './type';

const StatusMsg = rclnodejs.require('humanoid_amr_core_pkg/msg/Status');
class TestTopic {
    private _publisher;
    private _node: rclnodejs.Node;
    constructor(node: rclnodejs.Node) {
        this._node = node
        this._publisher = node.createPublisher('humanoid_amr_core_pkg/msg/Status', 'robot_status');
    }
    public intervalTopic() {
        setInterval(() => {
            const msg = new StatusMsg({
                robot_name: 'AMR-001',
                battery_level: Math.floor(Math.random() * 100)  // 0~99%
            });

            // console.log(`Publishing: ${JSON.stringify(msg)}`);
            this._publisher.publish(msg)
        }, 2000)
    }
}


export default TestTopic;