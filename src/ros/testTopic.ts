import * as rclnodejs from 'rclnodejs';
import { FeedBackType } from './type';


class TestTopic {
    private _publisher;
    private _node: rclnodejs.Node;
    constructor(node: rclnodejs.Node) {
        this._node = node
        this._publisher = node.createPublisher('std_msgs/msg/String', 'robot_status');
    }
    public intervalTopic() {
        setInterval(() => {
            const StringMsgType = rclnodejs.require('std_msgs/msg/String');
            const msg = new StringMsgType();
            msg.data = 'Hello from rclnodejs!';
            console.log(`Publishing: ${JSON.stringify(msg)}`);
            this._publisher.publish(msg)
        }, 2000)
    }
}


export default TestTopic;