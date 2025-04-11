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
  node.createService(
    'humanoid_pkg/srv/ShortestPath',
    `kenmec_${configs.AMR_TYPE}_socket/shortest_path`,
    (request, response) => {
      console.log('Received shortest_path:', request.shortest_path);

      // 回傳成功
      response.send({ result: true });
    }
  );

  const test = new TestTopic(node);
  test.intervalTopic();
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
