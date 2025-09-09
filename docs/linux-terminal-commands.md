# Essential Linux Terminal Commands for DevOps

Welcome to your curated list of **60 must-know Linux commands** for all Linux users and so DevOps professionals. Use this document to organize, learn, and reference key commands that streamline your workflow.

---

## Table of Contents

1. [File & Directory Management](#file--directory-management)
2. [System Information](#system-information)
3. [Process Management](#process-management)
4. [Networking](#networking)
5. [Package Management](#package-management)
6. [Disk Usage & Filesystems](#disk-usage--filesystems)
7. [User & Permissions](#user--permissions)
8. [Text Processing](#text-processing)
9. [Archiving & Compression](#archiving--compression)
10. [Other Useful Commands](#other-useful-commands)

---

## How to Use

- **Command:**  
    `command_name`

- **Description:**  
    Brief explanation of what the command does.

- **Example:**  
    ```
    command_name [options]
    ```

---

## File & Directory Management

| Command | Description | Example |
|---------|-------------|---------|
| ls      | Lists files in the current directory, with options for detailed view and hidden files. | `ls -l` |
| pwd     | Prints the current working directory. | `pwd` |
| cd      | Changes the current directory to the specified path. | `cd /home/user` |
| touch   | Creates a new file or updates the timestamp of an existing file. | `touch file.txt` |
| mkdir   | Creates a new directory. | `mkdir new_folder` |
| cp      | Copies files and directories. | `cp file.txt /tmp/` |
| mv      | Moves or renames files and directories. | `mv old.txt new.txt` |
| rm      | Removes files or directories. | `rm -r folder` |
| ln      | Creates a symbolic link to a file. | `ln -s file.txt link.txt` |
| cat     | Concatenates and displays the content of files. | `cat file.txt` |
| nano    | Opens a file in the Nano text editor. | `nano file.txt` |
| vim     | Opens a file in the Vim text editor. | `vim file.txt` |
| shred   | Overwrites a file to hide its contents, and optionally deletes it. | `shred file.txt` |

> **Best use case:** Overwrite a file 100 times, add a final overwrite with zeros, remove the file after overwriting it, and show verbose progress on the screen:
> ```sh
> shred --verbose --zero --remove --iterations=100 path/to/file
> ```

---

## System Information

| Command | Description | Example |
|---------|-------------|---------|
| uname   | Prints system information. | `uname -a` |
| neofetch| Shows system information with an image. | `neofetch` |
| whoami  | Displays the current user’s username. | `whoami` |
| cal     | Displays a calendar. XD (useless) | `cal` |
| free    | Displays the amount of free and used memory in the system. | `free` |
| df      | Reports file system disk space usage. | `df -h` |

---

## Process Management

| Command | Description | Example |
|---------|-------------|---------|
| ps      | Reports a snapshot of the current processes. | `ps aux` |
| top     | Displays Linux processes. | `top` |
| htop    | Interactive process viewer (if installed). | `htop` |
| kill    | Sends a signal to terminate a process. | `kill 1234` |
| pkill   | Kills processes by name. | `pkill firefox` |
| exit    | Exits the current session or shell. | `exit` |

---

## Networking

| Command | Description | Example |
|---------|-------------|---------|
| ssh     | Connects to a Linux machine remotely. | `ssh user@server` |
| ifconfig| Configures network interfaces. | `ifconfig` |
| ip      | Shows and manipulates routing, devices, policy routing, and tunnels. | `ip address` |
| ping    | Checks the reachability of a host on an IP network. | `ping google.com` |
| traceroute| Traces the route packets take to a network host. | `traceroute example.com` |
| netstat | Displays network connections, routing tables, interface statistics, masquerade connections, and multicast memberships. | `netstat -tulpen` |
| ss      | Utility to investigate sockets. | `ss -tulpen` |
| curl    | Transfers data from or to a server. | `curl https://example.com` |
| wget    | Downloads files from the internet. | `wget https://example.com/file` |
| resolvectl| Manages the system’s DNS resolver configuration. | `resolvectl status` |

---

## Package Management

| Command | Description | Example |
|---------|-------------|---------|
| apt     | Handles package installation and updates on Debian-based systems. | `sudo apt update` |
| sudo    | Executes a command with superuser privileges. | `sudo apt install vim` |

---

## Disk Usage & Filesystems

| Command | Description | Example |
|---------|-------------|---------|
| df      | Reports file system disk space usage. | `df -h` |
| du      | Estimates file and directory space usage. | `du -sh *` |

---

## User & Permissions

| Command | Description | Example |
|---------|-------------|---------|
| adduser | Adds a new user to the system. | `sudo adduser newuser` |
| useradd | Adds a new user to the system. | `sudo useradd newuser` |
| su      | Switches the current user to another user. | `su username` |
| passwd  | Changes the password for a user. | `passwd username` |
| chown   | Changes the owner of a file. | `chown user file.txt` |
| chmod   | Changes the file mode (permissions). | `chmod +x script.sh` |

---

## Text Processing

| Command | Description | Example |
|---------|-------------|---------|
| grep    | Searches for patterns in files. | `grep 'pattern' file.txt` |
| awk     | Versatile programming language for working on files. | `awk '{print $1}' file.txt` |
| sort    | Sorts the lines of a file. | `sort file.txt` |
| head    | Displays the first few lines of a file. | `head file.txt` |
| tail    | Displays the last few lines of a file. | `tail file.txt` |
| diff    | Displays the differences between two files. | `diff file1.txt file2.txt` |
| cmp     | Compares two files byte by byte. | `cmp file1.txt file2.txt` |
| less    | Views the content of a file one page at a time. | `less file.txt` |
| echo    | Displays text or redirects it to a file. | `echo 'Hello' > file.txt` |

---

## Archiving & Compression

| Command | Description | Example |
|---------|-------------|---------|
| zip     | Compresses files into a zip archive. | `zip archive.zip file.txt` |
| unzip   | Extracts files from a zip archive. | `unzip archive.zip` |

---

## Other Useful Commands

| Command | Description | Example |
|---------|-------------|---------|
| man     | Displays the manual page for a command. | `man ls` |
| whatis  | Displays a one-line description of a command. | `whatis ls` |
| which   | Shows the path to the command’s executable. | `which python3` |
| clear   | Clears the terminal screen. | `clear` |
| history | Shows command history. | `history` |
| reboot  | Reboots the system. | `sudo reboot` |
| shutdown| Shuts down the system. | `sudo shutdown now` |
| bc      | Arbitrary precision calculator language. | `echo "scale=2; 10/3" | bc` |

---

> **Tip:**  
> Use code blocks for commands and examples.  
> Add notes or warnings as needed using blockquotes.

---

**_Happy DevOps-ing!_**