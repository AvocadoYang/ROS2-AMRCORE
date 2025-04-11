import { Socket } from "socket.io-client";
import * as rclnodejs from 'rclnodejs';
import { startOneTermAllowPath$ } from "./action";
import { Subject, switchMap, tap } from "rxjs";
import { Output as MCOutput, TEST } from "../../../actions/missionOutput";
import { ofType } from "../../../helpers/operators";

type Input = MCOutput<typeof TEST>;

class TrafficControl {
    private input$: Subject<Input>;
    constructor(private socket: Socket, private node: rclnodejs.Node) {
        this.input$ = new Subject();

        this.input$.pipe(ofType(TEST)).subscribe((data) => {
            console.log(data, '@@@@@@@')
        })
    }

    private startOneTermAllowPath() {
        // return startOneTermAllowPath$(this.socket).
        //     pipe(switchMap(() => {
        //         this.node.getLogger().info("Start wait arriving");

        //     }))
    }

    public next(action: Input) {
        this.input$.next(action);
    }
}

export default TrafficControl