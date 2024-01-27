// op will run child first then parent always
#include <stdio.h>
#include<stdlib.h>
#include <unistd.h>
#include <sys/wait.h>


int main()
{
    int pid,status;
    pid = fork();
    
    // pid of parent will get process id of child
    // pid of child will get 0
    // pid if the fork fails will get -1
    
    // now we use wait(&status) with fork using exit(x), x as a status code for wait trigger on any value >0
    
    if(pid== -1){
        printf("fork unsucessfull\n");
        exit(1);
    }
    else if(pid==0){
        printf("child\n");
        exit(2);
    }
    else{
        // here wait will be changing the value at address of status, by reading the exit(x) x value from child process
        wait(&status);
        printf("parent\n");
        exit(3);
    }

    return 0;
}
