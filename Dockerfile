FROM osrf/ros:humble-desktop

RUN apt-get update && \
    apt-get install -y \
    sudo \
    curl \
    byobu \
    wget \
    vim \
    openssh-server \
    net-tools \
    iputils-ping && \
    rm -rf /var/lib/apt/lists/*

RUN mkdir -p /AGV/ros2_ws/src/humanoid_pkg

COPY ./setup.sh /
COPY . /AGV/ros2_ws/src/humanoid_pkg

RUN echo "source /opt/ros/humble/setup.bash" > /root/.bashrc

RUN apt-get update
RUN apt-get install -y \
    build-essential \
    libssl-dev && \
    curl https://raw.githubusercontent.com/creationix/nvm/v0.40.2/install.sh | bash

RUN echo 'export NVM_DIR="$HOME/.nvm"' >> /root/.bashrc && \
    echo '[ -s "$NVM_DIR/nvm.sh" ] && \. "$NVM_DIR/nvm.sh"' >> /root/.bashrc && \
    echo '[ -s "$NVM_DIR/bash_completion" ] && \. "$NVM_DIR/bash_completion"' >> /root/.bashrc

#need to use nvm intall node 20

RUN echo "root:kenmec" | chpasswd


RUN echo 'export NVM_DIR="$HOME/.nvm"' >> /root/.bashrc && \
    echo '[ -s "$NVM_DIR/nvm.sh" ] && \. "$NVM_DIR/nvm.sh"' >> /root/.bashrc && \
    echo '[ -s "$NVM_DIR/bash_completion" ] && \. "$NVM_DIR/bash_completion"' >> /root/.bashrc

RUN service ssh start

EXPOSE 22

#need to run service ssh start
#run npx rclnodejs genreate-typings to setting type of ROS
CMD ["bash"]