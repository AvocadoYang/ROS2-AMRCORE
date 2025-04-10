import config from 'config';
import chalk from 'chalk';
import { number, object, string } from 'yup';
import { format } from 'util';

console.log(
    chalk.blue(
        'Load config with following files: ',
        format(config.util.getConfigSources().map((c) => c.name)),
    )
);

const schema = object({
    MISSION_CONTROL_HOST: string().required(),
    MISSION_CONTROL_PORT: number().integer().min(0).max(65535).required(),
    MAC_ADDRESS: string().required(),
    AMR_TYPE: string().required(),
    LOG_LEVEL: string()
        .oneOf(['error', 'warn', 'info', 'http', 'verbose', 'debug', 'silly'])
        .required(),
});


const parsed = schema.validateSync(config);



export default parsed
