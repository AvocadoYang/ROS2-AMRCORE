import * as rclnodejs from 'rclnodejs';
import socket_init from './socket'
import chalk from 'chalk';
import { TestTopic, MissionActionClient, FibonacciActionClient } from './ros';
import { Mission_Payload } from './socket/MissionControl/type'

async function example() {

  await rclnodejs.init().catch((error) => {
    console.log(chalk.red(error));
  });
  const node = new rclnodejs.Node('amr_core_client');
  const missionClient = new MissionActionClient(node);
  const msg: Mission_Payload = {
  	Id: 'testId',
	Action: 'addTaskSlice',
	Time: '123',
	Device: 'amr01',
	Body: {
	    operation: {
	        id: 1,
		type: ['move'],
		control: ['shak'],
		param: ['123']
	    }
	}
  }
  socket_init(node);
 // missionClient.sendMission(msg);
  //const FibonacciAction = new FibonacciActionClient(node);
 // FibonacciAction.sendGoal();
	
  //const topic = new TestTopic(node);
  //topic.intervalTopic();
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
