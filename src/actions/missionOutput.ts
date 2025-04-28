const PREFIX = `MC_OUT`


export const TEST = `${PREFIX}/TEST` as const;
export const sendTest = (data: { test: string }) => ({
    type: TEST,
    ...data
})

export const CANCEL_MISSION = `${PREFIX}/CANCEL_MISSION` as const;
export const sendCancelMission = (data: { goadId: string }) => ({
    type: CANCEL_MISSION,
    ...data
})


type AllOutput = ReturnType<
    | typeof sendTest
    | typeof sendCancelMission
>;

export type Output<
    T extends AllOutput['type'] = AllOutput['type'],
    A extends AllOutput = AllOutput,
> = A extends { type: T } ? A : never;
