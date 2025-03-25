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

source ~/.bashrc

DB=$(sudo -E docker ps -qf "name=mysql")
    if [ -n "$DB" ]; then
      echo "mysql container ID is ${DB}"
      echo -e "${YELLOW}Enter mysql container...${NC}"
      docker exec -it $DB bash
    else
      echo -e "${RED}No DB container found${NC}"
      exit 1
    fi