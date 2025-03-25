export enum YawGenre {
    CUSTOM,
    SELECT,
    CALCULATE_BY_AGV_AND_SHELF_ANGLE,
}

export type Action = "addTaskSlice"

/**
 * 機器人 的任務格式
 */
export type Robot_Action = {
    operation: {
        id: number,
        type: string[],// ['charge','move','load','offload','upper_control'],
        control: string[], // 第一階段(揮手, 招手,握手及拍照等動作)
        param: string[],  //第二階段(可控制角度)按照動作提供可輸入角度的選項
    }
}

/**
* 叉車 AGV 的任務格式
*/
export type Fork_Action = {
    operation: {
        type: string;
        control: Array<string>;
        wait: number;
        is_define_id: string;
        id: number;
        is_define_yaw: YawGenre;
        yaw: number;
        tolerance: number;
        lookahead: number;
        roughly_pass: boolean;
        from: number;
        to: number;
        hasCargoToProcess: boolean;
        max_forward: number;
        min_forward: number;
        max_backward: number;
        min_backward: number;

        waitOtherAmr: string;
        waitGenre: string;
        auto_preparatory_point: boolean;
    };
    io: {
        fork: {
            is_define_height: string;
            height: number;
            move: number;
            shift: number;
            tilt: number;
        };
        camera: {
            config: number;
            modify_dis: number;
        };
    };
    cargo_limit: {
        load: number;
        offload: number;
    };
    mission_status: {
        feedback_id: string;
        name: string[];
        start: string;
        end: string;
        bookBlock: string[] | null;
    };
};


export type Mission_Action = Robot_Action;

/**
 * 所有機器人貨車輛的任務格式
 */
export type Mission_Payload = {
    Id: string; //傳送此指令的為一值
    Action: Action //指令類型
    Time: string; //時間戳記
    Device: string; // 傳送對象的 ID
    Body: Mission_Action
}
