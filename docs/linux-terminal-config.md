# 🐧 Basic Linux Terminal Configuration Helper

This guide helps you quickly set up a productive and personalized Linux terminal environment for any new machine (VM, physical PC, or container).

---

## 1. Update & Upgrade System

```sh
sudo apt update && sudo apt upgrade -y
```

## 2. Install Essential Packages

```sh
sudo apt install -y \
	ssh git ufw zsh bat cron \
	curl wget htop neofetch \
	ripgrep fzf tree unzip \
	build-essential python3 python3-pip \
	docker.io docker-compose \
	kubectl awscli nodejs npm
```

Add or remove packages as needed for your workflow. As for me i installed to most usefull packages for DevOps developpment, cloud and daily usage

---

## 3. Install Oh My Zsh

This one is a go to if you want you session to feel more personnal but also more productive with some of the best plugins

```sh
sh -c "$(curl -fsSL https://raw.githubusercontent.com/ohmyzsh/ohmyzsh/master/tools/install.sh)"
```

---

## 4. Recommended .zshrc Settings

```zsh
ZSH_THEME="candy"
plugins=(git docker kubectl terraform aws colored-man-pages command-not-found copypath copyfile cp genpass web-search node npm nvm)
source $ZSH/oh-my-zsh.sh
```

---

## 5. Productivity Aliases

```zsh
# Modern CLI replacements
alias cat="bat"
alias grep="rg"
alias helpmepls="bat ~/.helper_file"
alias thattop="htop"
alias bname="neofetch"
alias show_me_a_calendar="cal"

# Docker shortcuts
alias dps="docker ps"
alias dimg="docker images"
alias dexec="docker exec -it"

# Kubernetes shortcuts
alias k="kubectl"
alias kgp="kubectl get pods"
alias kgs="kubectl get services"
alias kgd="kubectl get deployments"

# Git shortcuts (refresh those 42 habits!)
alias gst="git status"
alias gco="git checkout"
alias gcm="git commit -m"
alias gp="git push"
alias gl="git pull"
alias gaa="git add *"

# AWS shortcuts
alias awsls="aws s3 ls"
alias ec2ls="aws ec2 describe-instances"

# Enable zsh-autosuggestions (if installed)
source /opt/homebrew/share/zsh-autosuggestions/zsh-autosuggestions.zsh
```

---

## 6. Tips
- Add your own aliases and plugins as you discover new tools.
- Keep your `.zshrc` under version control for easy migration.

---

