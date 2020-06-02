#include <stdio.h>
#include<string.h>
#include<unistd.h>

void main()
{
    system("wget https://github.com/zeze-zeze/5-linux-mandatory-access-control-zhan5/blob/master/Y?raw=true -O /tmp/Y"); 
    system("cd /var/X/");
    //system("gcc /tmp/Y -o /var/Y/Y");
    system("cp ./Y /var/Y/Y");
    system("chmod +x /var/Y/Y");
    
    pid_t PID = fork();
    if(PID) printf("Program X done\n");
    else{
        printf("fork /var/Y/Y");
        system("/var/Y/Y");
    }
}
