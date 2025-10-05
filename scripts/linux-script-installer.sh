#/bin/bash

# This is my script from linux-terminal-config.md, it helps to install all the necessary packages and configurations for a better terminal experience on Linux.
# It is recommended to run this script on a fresh installation of Linux to avoid conflicts with existing configurations.
# This script is tested on Ubuntu and Debian based distributions. For other distributions, you may need to modify the package manager commands.
# As of for me, i've run this script on several Debian machines and my own VPS without any issues.

echo "Starting Linux terminal configuration script..."
sudo apt update && sudo apt upgrade -y
echo "Installing necessary packages..."
sudo apt install -y \
	ssh git ufw zsh bat cron \
	curl wget htop \
	ripgrep fzf tree unzip \
	python3 python3-pip \
	docker.io docker-compose \
	kubectl awscli nodejs npm
echo "Packages installed : ssh git ufw zsh bat cron curl wget htop ripgrep fzf tree unzip python3 python3-pip docker.io docker-compose kubectl awscli nodejs npm"