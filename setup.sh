nvm install 20
npm install -g yarn
npm install -g rclnodejs-cli

echo "PermitRootLogin=yes" >> /etc/ssh/sshd_config
echo "PasswordAuthentication=yes" >> /etc/ssh_config

service ssh restart