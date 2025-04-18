import * as rclnodejs from 'rclnodejs';
import SocketConnect from './socket'
import chalk from 'chalk';
import configs from './configs'
import { TestTopic } from './ros';


async function getNode() {

  await rclnodejs.init().catch((error) => {
    console.log(chalk.red(error));
  });
  const node = new rclnodejs.Node('amr_core_client');

  return node
}

(async function main(): Promise<void> {
  const node = await getNode();

  new SocketConnect(node)

  process.on('SIGINT', () => {
    console.log('Stopping...');
    rclnodejs.shutdown();
    process.exit(0);
  });
  rclnodejs.spin(node);
})().catch((): void => {
  process.exitCode = 1
})
