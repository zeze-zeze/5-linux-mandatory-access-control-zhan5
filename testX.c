#include <stdio.h>
#include<string.h>
#include<unistd.h>

void main()
{
    pid_t PID = fork();
    if(PID) printf("Program testX done\n");
    else{
        printf("fork /var/Y/testY");
        system("/var/Y/testY");
    }
}
