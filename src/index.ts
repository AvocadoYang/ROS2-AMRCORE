import * as rclnodejs from 'rclnodejs';
import socket_init from './socket'
import chalk from 'chalk';
import { TestTopic } from './ros';

// Create a node that publishes a msg to the topic 'foo' every 1 second.
// View the topic from the ros2 commandline as shown below:
//     ros2 topic echo foo std_msgs/msg/String
async function example() {

  await rclnodejs.init().catch((error) => {
    console.log(chalk.red(error));
  });
  const node = new rclnodejs.Node('amr_core_client')
  const topic = new TestTopic(node);
  topic.intervalTopic()
  // socket_init(node);

  // let node = rclnodejs.createNode('MyNode');

  // // Create main working components here, e.g., publisher, subscriber, service, client, action
  // // For example, a publisher sending a msg every 1 sec
  // let publisher = node.createPublisher('std_msgs/msg/String', 'foo');
  // let cnt = 0;
  // let msg = rclnodejs.createMessageObject('std_msgs/msg/String');
  // node.createTimer(1000, () => {
  //   msg.data = `msg: ${cnt += 1}`
  //   publisher.publish(msg);
  // });

  // node.spin();

  // console.log('Use this command to view the node\'s published messages: ros2 topic echo foo std_msgs/msg/String');
}

(async function main(): Promise<void> {
  example();
  // process.on('SIGINT', () => {
  //   console.log('Stopping...');
  //   process.exit(0);
  // });
})().catch((): void => {
  process.exitCode = 1
})