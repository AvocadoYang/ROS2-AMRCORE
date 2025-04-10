#!/bin/bash 

gnome-terminal -- bash -c "docker run -d -it --net=host --name=amr-core-ros2_ws --restart unless-stopped -v ros2_ws:/AGV/ros2_ws kenmec-ros2:amr-core; exec bash"

