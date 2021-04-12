
# this script extracts gadgets 
rm ./myropgadgets.txt
~/extract-vmlinux /boot/vmlinuz-4.4.264-younessversion >./vmlinux
ROPgadget --binary ./vmlinux >myropgadgets.txt