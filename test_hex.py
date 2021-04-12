#! /usr/bin/env python2

import socket
import struct
from pwn import p64,p32


buf=b""
buf+=p64(0xffff880045be5db0)

for i in range(len(buf)):
	if buf[i]=="\x00":
		print("null byte found !!")
	#print("char {}".format(buf[i]))