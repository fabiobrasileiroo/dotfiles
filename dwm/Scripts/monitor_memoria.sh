#!/bin/bash

# ... (código original do script para verificar a memória)

while true; do
	df -h /dev/nvme0n1p1
	sleep 10
done
