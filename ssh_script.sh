#!/bin/bash

# Set the SSH username, hostname, and password
USERNAME="enter user name"
HOSTNAME="enter ip "
PASSWORD="enter password"

# SSH command using sshpass
sshpass -p "$PASSWORD" ssh "$USERNAME@$HOSTNAME"

