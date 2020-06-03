#include <stdio.h>
#include<string.h>
#include<unistd.h>

void main()
{
    system("/usr/bin/wget https://raw.githubusercontent.com/zeze-zeze/5-linux-mandatory-access-control-zhan5/master/Y.c -O /var/X/Y.c");
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
