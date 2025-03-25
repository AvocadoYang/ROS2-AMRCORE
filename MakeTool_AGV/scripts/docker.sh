#!/bin/bash

# Define color codes
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[0;33m'
BLUE='\033[0;34m'
PURPLE='\033[0;35m'
CYAN='\033[0;36m'
WHITE='\033[0;37m'
NC='\033[0m'

# Check if Docker is already installed
if command -v docker &> /dev/null; then
  echo -e "${GREEN}Docker is already installed${NC}"
else
  # Install Docker
  echo -e "${GREEN}Installing Docker...${NC}"
  sudo apt update && \
  sudo apt install apt-transport-https ca-certificates curl software-properties-common && \
  curl -fsSL https://download.docker.com/linux/ubuntu/gpg | sudo apt-key add - && \
  sudo add-apt-repository "deb [arch=amd64] https://download.docker.com/linux/ubuntu focal stable" && \
  apt-cache policy docker-ce && \
  sleep 2
  sudo apt install docker-ce && \
  sudo usermod -aG docker ${USER}
  su - ${USER}
  sudo usermod -aG docker username
fi
#sudo sh -c "$(curl -fsSL https://get.docker.com)" || { echo -e "${RED}Failed to install Docker${NC}"; exit 1; }

# Check if Docker is already installed
if command -v docker-compose &> /dev/null; then
  echo -e "${GREEN}docker-compose is already installed${NC}"
  exit 0
fi

# Get Docker Compose version and install
DCINFO=$(curl -s https://api.github.com/repos/docker/compose/releases/latest) || { echo -e "${RED}Failed to fetch Docker Compose version${NC}"; exit 1; }
COMPOSE_VERSION=$(echo "$DCINFO" | grep 'tag_name' | cut -d\" -f4)
echo -e "${GREEN}Starting to install Docker Compose version ${COMPOSE_VERSION}...${NC}"
sudo sh -c "curl -L https://github.com/docker/compose/releases/download/${COMPOSE_VERSION}/docker-compose-$(uname -s)-$(uname -m) -o /usr/local/bin/docker-compose" && \
sudo chmod +x /usr/local/bin/docker-compose && \
sudo sh -c "curl -L https://raw.githubusercontent.com/docker/compose/${COMPOSE_VERSION}/contrib/completion/bash/docker-compose -o /etc/bash_completion.d/docker-compose" && \ 
docker-compose -v || { echo -e "${RED}Failed to install Docker Compose${NC}"; exit 1; }


~/.bashrc
