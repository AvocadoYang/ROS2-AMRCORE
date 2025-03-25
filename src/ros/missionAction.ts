import * as rclnodejs from 'rclnodejs';

class MissionActionClient {
    // private _actionClient;
    constructor(node: rclnodejs.Node) {
        const MissionAction = rclnodejs.require('humanoid_pkg/action/Mission');
        console.log(MissionAction)
        // this._actionClient = new rclnodejs.ActionClient(
        //     node,
        //     MissionAction,
        //     "/fleet_manager/mission"
        // )
    }
    public addMission() {

    }
}


export default MissionActionClient;