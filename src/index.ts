import * as rclnodejs from 'rclnodejs';
import socket_init from './socket'
import chalk from 'chalk';
import { TestTopic } from './ros';

async function example() {

  await rclnodejs.init().catch((error) => {
    console.log(chalk.red(error));
  });
  const node = new rclnodejs.Node('amr_core_client')
  const topic = new TestTopic(node);
  topic.intervalTopic();
  return node
}

(async function main(): Promise<void> {
  const node = await example();
  process.on('SIGINT', () => {
    console.log('Stopping...');
    rclnodejs.shutdown();
    process.exit(0);
  });
})().catch((): void => {
  process.exitCode = 1
})