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
    echo -e "${RED}folder DB_backup is not exist"
    exit 1
fi

read -p "Please input file name you want to store: " FILE_NAME

if [ ! -f "$backup_dir/$FILE_NAME.sql" ]; then
    echo -e "${RED}file $FILE_NAME.sql is not exist"
    exit 1
fi


read -p "Please input database name you want to store: " DATABASE_NAME
read -sp "Please input database password: " PASSWORD

DB_CHECK=$(docker exec mysql mysql -u root --password=${PASSWORD} -e "SHOW DATABASES LIKE '${DATABASE_NAME}';" | grep -w "${DATABASE_NAME}")

if [ -z $DB_CHECK ]; then
    echo -e "${RED}datbase $DATABASE_NAME is not exist"
    exit 1
fi

cat ./$backup_dir/$FILE_NAME.sql | docker exec -i mysql /usr/bin/mysql -u root --password=${PASSWORD} $DATABASE_NAME

echo -e "${GREEN}Database $DATABASE_NAME restored successfully from $FILE_NAME.sql!"