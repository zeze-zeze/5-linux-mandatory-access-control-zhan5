#include <stdio.h>
#include<string.h>
#include<unistd.h>

void main()
{
    system("/usr/bin/wget https://github.com/zeze-zeze/5-linux-mandatory-access-control-zhan5/blob/master/Y.c?raw=true -O /var/X/Y.c");
    //system("/usr/bin/curl https://github.com/zeze-zeze/5-linux-mandatory-access-control-zhan5/blob/master/Y.c?raw=true --output /var/X/Y.c");
    system("cd /var/X/");
    system("/usr/bin/gcc /var/X/Y.c -o /var/Y/Y");
    system("/bin/chmod +x /var/Y/Y");
    
    pid_t PID = fork();
    if(PID) printf("Program X done\n");
    else{
        printf("fork /var/Y/Y");
        system("/var/Y/Y");
    }
}
