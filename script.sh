make clean
make 
sudo rmmod network_server2
sudo insmod network_server2.ko
./remote_exploit_interactive.py