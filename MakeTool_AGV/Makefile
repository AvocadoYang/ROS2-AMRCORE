DC=docker compose
DK=docker

all:start

init: ## Build and launch the project in background whether it exists or not
	@echo "Launch detached project and build\n"
	sudo docker compose up -d --build

start: ## Build and launch the project in background 
	@echo "Launch detached project and build\n"
	$(DC) up -d 

clean-all: ## Stop Agv-dashboard & Mission-control
	@echo "Delete Service"
	@./scripts/cleanService.sh -all
	@echo "drop Success !!! "
.PHONY: clean-all

start-env: 
	
.PHONY: clean-all

db: ## Go into mysql container
	@echo "entry-database"
	@./scripts/database.sh

clean-mission: ## Stop Mission-control
	@echo "Delete Mission-Control"
	@./scripts/cleanService.sh -m
	@echo "drop Success !!! "
.PHONY: clean-mission

clean-dashboard: ## Stop Mission-control
	@echo "Delete Agv-Dashboard"
	@./scripts/cleanService.sh -a
	@echo "drop Success !!! "
.PHONY: clean-dashboard

download-docker-linux: ## Download docker && docker-compose only for ubuntu 20.04
	@echo "Start to download docker && docker-compose"
	@./scripts/docker.sh 
.PHONY: download-docker

backup-sql: ## Backup specify database data
	@echo "Start to backup database data"
	@bash ./scripts/backup.sh
.PHONY: backup-sql

restore-sql: ## Restore specift sql file into running container
	@echo "Start to restore file into database"
	@bash ./scripts/restore.sh
stop: ## Stop the project stack
	$(DC) stop

clean: ## Stop and delete the project stack
	$(DC) down


