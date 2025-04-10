import * as rclnodejs from 'rclnodejs';
import SocketConnect from './socket'
import chalk from 'chalk';


async function example() {

  await rclnodejs.init().catch((error) => {
    console.log(chalk.red(error));
  });
  const node = new rclnodejs.Node('amr_core_client');

  new SocketConnect(node)

  return node
}

(async function main(): Promise<void> {
  const node = await example();
  process.on('SIGINT', () => {
    console.log('Stopping...');
    rclnodejs.shutdown();
    process.exit(0);
  });
  rclnodejs.spin(node);
})().catch((): void => {
  process.exitCode = 1
})
