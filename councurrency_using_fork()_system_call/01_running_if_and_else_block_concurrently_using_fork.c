#include <stdio.h>
#include<stdlib.h>
#include <unistd.h>

int main()
{
    int pid;
    pid = fork();
    
    // pid of parent will get process id of child
    // pid of child will get 0
    // pid if the fork fails will get -1
    
    if(pid== -1){
        printf("fork unsucessfull\n");
        exit(1);
    }
    else if(pid==0){
        printf("child\n");
        exit(2);
    }
    else{
        printf("parent\n");
        exit(3);
    }

    return 0;
}

