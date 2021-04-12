sudo cat /proc/kallsyms |grep "revshell" 
sudo cat /proc/kallsyms |grep "debugmodule"
sudo cat /proc/kallsyms |grep "redirect_code"
sudo cat /proc/kallsyms |grep "network_server_exit"
sudo cat /proc/kallsyms |grep "commit_creds" |head -1
sudo cat /proc/kallsyms |grep "prepare_kernel_cred" |head -1