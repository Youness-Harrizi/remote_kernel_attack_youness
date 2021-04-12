#obj-m += network_client.o 
obj-m += network_server2.o 

all:
	make  -C /lib/modules/$(shell uname -r)/build M=$(PWD)  modules
clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean

