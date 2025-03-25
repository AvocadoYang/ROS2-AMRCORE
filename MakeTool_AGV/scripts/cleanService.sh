#!/bin/bash

RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[0;33m'
BLUE='\033[0;34m'
PURPLE='\033[0;35m'
CYAN='\033[0;36m'
WHITE='\033[0;37m'
NC='\033[0m'

if [ $# -lt 1 ]; then
  echo "Usage: $0 <param1> "
  exit 1
fi

param=$1

source ~/.bashrc


if [ "$param" = "-all" ]; then
  echo -e "${GREEN}Ready to delete all containers${NC}"
  
  FRONTEND=$(sudo -E docker ps -qf "name=agvs-dashboard")
    if [ -n "$FRONTEND" ]; then
      echo "agv-dashboard container ID is ${FRONTEND}"
      echo -e "${YELLOW}Start to delete agv-dashboard...${NC}"
      sudo docker rm --force ${FRONTEND}
      sudo docker rmi fleet-core-agvs-dashboard
    else
      echo -e "${RED}No agv-dashboard container found${NC}"
      exit 1
    fi
  
  BACKEND=$(sudo -E docker ps -qf "name=mc")
    if [ -n "$BACKEND" ]; then
      echo "mission-control container ID is ${BACKEND}"
      echo -e "${YELLOW}Start to delete mission-control...${NC}"
      sudo docker rm --force ${BACKEND}
      sudo docker rmi fleet-core-mission-control
    else
      echo -e "${RED}No mission container found${NC}"
      exit 1
    fi
  
elif [ "$param" = "-a" ]; then
 echo -e "${GREEN}Ready to delete all containers${NC}"
  
  FRONTEND=$(sudo -E docker ps -qf "name=agv-dashboard")
    if [ -n "$FRONTEND" ]; then
    echo "agv-dashboard container ID is ${FRONTEND}"
    echo -e "${YELLOW}Start to delete agv-dashboard...${NC}"
    sudo docker rm --force ${FRONTEND}
    sudo docker rmi fleet-core-agvs-dashboard
  else
    echo -e "${RED}No agv-dashboard container found${NC}"
    exit 1
  fi

elif [ "$param" = "-m" ]; then
  echo -e "${GREEN}Ready to delete mission-control container${NC}"
  
    BACKEND=$(sudo -E docker ps -qf "name=mission-control")
        if [ -n "$BACKEND" ]; then
          echo "mission-control container ID is ${BACKEND}"
          echo -e "${YELLOW}Start to delete mission-control...${NC}"
          sudo docker rm --force ${BACKEND}
          sudo docker rmi fleet-core-mission-control
        else
          echo -e "${RED}No mission container found${NC}"
          exit 1
        fi

else
  echo -e "${RED}Invalid parameter: $param${NC}"
  echo "Usage: $0 <-all|-a|-m>"
  exit 1
fi





