import * as rclnodejs from 'rclnodejs';

const Fibonacci = rclnodejs.require('humanoid_pkg/action/Fibonacci');
class FibonacciActionClient{
   private _actionClient: rclnodejs.ActionClient<any>;
   private _node: rclnodejs.Node;
   private goalHandle: rclnodejs.ClientGoalHandle<any> | undefined;
   constructor(node: rclnodejs.Node) {
    this._node = node;

    this._actionClient = new rclnodejs.ActionClient(
      node,
      'humanoid_pkg/action/Fibonacci',
      'fibonacci'
    );
   }

    public async sendGoal() {
    this._node.getLogger().info('Waiting for action server...');
    await this._actionClient.waitForServer();

    const goal = new Fibonacci.Goal();
    goal.order = 10;

    this._node.getLogger().info('Sending goal request...');


    const goalHandle = await this._actionClient.sendGoal(goal, (feedback) =>
      this.feedbackCallback(feedback)
    );
    console.log(goalHandle.accepted)

    if (!goalHandle.isAccepted()) {
      this._node.getLogger().info('Goal rejected');
      return;
    }

    this._node.getLogger().info('Goal accepted');

    const result = await goalHandle.getResult();

    if (goalHandle.isSucceeded()) {
      this._node
        .getLogger()
        .info(`Goal suceeded with result: ${result.sequence}`);
    } else {
      this._node.getLogger().info(`Goal failed with status: ${status}`);
    }

    rclnodejs.shutdown();
  }

  private feedbackCallback(feedback: { partial_sequence: number[] }) {
    this._node.getLogger().info(`Received feedback: ${feedback.partial_sequence}`);
  }
}

export default FibonacciActionClient;
