
# Define color codes
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[0;33m'
BLUE='\033[0;34m'
PURPLE='\033[0;35m'
CYAN='\033[0;36m'
WHITE='\033[0;37m'
NC='\033[0m'

backup_dir="./DB_backup"



if [ ! -d "$backup_dir" ]; then
    echo "folder DB_backup not exist, start creating..."
    mkdir "$backup_dir"
    echo "${GREEN}folder DB_backup create successful!"
fi

read -p "Please input database name you want to backup: " DATABASE_NAME
read -p "Please input fileName: " FILE_NAME
read -sp "Please input database password: " PASSWORD

echo start backup to $backup_dir/${DATABASE_NAME}_${FILE_NAME}_backup.sql
FILE_NAME_SAFE=$(echo "$FILE_NAME" | tr '/' '-')

docker exec mysql /usr/bin/mysqldump -u root --password=${PASSWORD} $DATABASE_NAME > $backup_dir/${DATABASE_NAME}_${FILE_NAME_SAFE}_backup.sql