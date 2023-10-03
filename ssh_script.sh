#!/bin/bash

# Set the SSH username, hostname, and password
USERNAME="einfochip"
HOSTNAME="10.126.20.172"
PASSWORD="qwe1234"

# SSH command using sshpass
sshpass -p "$PASSWORD" ssh "$USERNAME@$HOSTNAME"

