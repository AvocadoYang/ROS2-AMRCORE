const PREFIX = `TC_OUT`


export const TEST = `${PREFIX}/TEST` as const;
export const sendTest = (data: { test: string }) => ({
    type: TEST,
    ...data
})


type AllOutput = ReturnType<
    | typeof sendTest
>;

export type Output<
    T extends AllOutput['type'] = AllOutput['type'],
    A extends AllOutput = AllOutput,
> = A extends { type: T } ? A : never;
