export type FeedBackType = {
    feedback_json: { current_status: number, warning_msg: string, task_status: boolean, cancel_status: boolean }
}

export type IsArrive = {
    data: {
        locationId: string;
        isArrive: boolean;
    }
};