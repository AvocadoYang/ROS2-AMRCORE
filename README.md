# ROS2-AMRCORE
![Ubuntu](https://img.shields.io/badge/Ubuntu-22.04-orange?logo=ubuntu)
![ROS 2](https://img.shields.io/badge/ROS%202-Humble-blue?logo=ros)

This project is a communication bridge between the traffic-center and the ROS2 robot driver.
Additionally, this project can also be used as a node within ROS.


## System Requirements

- **Operating System**: Ubuntu 22.04
- **Supported Architectures**: x86_64 (AMD64), ARM64 (AArch64)

## Prerequisites

Before installing this project please ensure the following is installed and configured on your system:

- **NodeJS** : version >= 16.0
- **ROS2 SDK** : specified as (**Humble** or **Jazzy**)  

## API Documentation
The communication format is defined by Jack and Jimmy. It can be viewed on [Notion](https://kenmec-itd.notion.site/1ad16a17478a802298bec55f57ee93dc?pvs=4).

## Usage
### Install dependencies:
```
npm install
```
### Project build:
Build the written code using `tsc` and output it to the `./dist` directory.
```
npm run build
```
After the build, navigate to the `ros2_ws` directory and use `colcon` to build the entire project. Then, run `setup.bash` to add `amr-core` node to the ROS environment.

#### Run in `ros2_ws`:
```
colcon build
```
#### Add node to ROS env:
```
source ./install/setup.sh
```

## ROS2 Interface Message Generation (important)
Run follower script to generate the message interfaces defined in `./action`, `./msg` and `./srv` folders.
```
npm run messages
```
Before running the command below, you need to use colcon build to ensure that your interface is added in env.
```
ros2 interface show humanoid_pkg/{your_interface}
```

## License

This project abides by the [Apache License 2.0](https://github.com/RobotWebTools/rclnodejs/blob/develop/LICENSE).
