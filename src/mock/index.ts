import { Mission_Payload } from "../socket/MissionControl/type";


export const fakeIoInfo = {
  connect_status: true,

  Query: 'fk',
  Set: 'lol',
  MultiSet: 'sigma',

  error_code: 'asd',
  error_info: 'fds',
  enable_ultrasoumd: true,
  ultrasound: 'gr',
  enable_baffle: true,

  baffle_left: true,
  baffle_right: true,
  manual_mode: true,
  enforce_charge: true,
  set_charge: true,
  battery: 50,
  charge_relay_status: false,
  voltage: 123,
  current: 456,

  front_2d_layer: 0,
  enable_2d_lidar: true,
  obstacle_2d_signal: true,
  obstacle_rear_2d_signal: true,
  obstacle_3d_signal: true,
  enable_recovery: true,
  enable_reboot: true,
  enable_tip: true,

  set_tip: 123,

  tip_left: true,
  tip_right: true,
  set_height: 0,
  current_height: 0,
  linear_x: 0,
  angular_z: 0,
  odom_x: 0,

  odom_y: 4,

  odom_w: 0,
  emergency_signal: 'bruh',
  emergency_stop: true,
  bumper: true,
  recovery: false,
};


export const msg: Mission_Payload = {
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