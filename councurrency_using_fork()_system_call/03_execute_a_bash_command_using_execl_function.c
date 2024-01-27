// op will run child first then parent always
#include <stdio.h>
#include<stdlib.h>
#include <unistd.h>
#include <sys/wait.h>


int main()
{
    int pid;
    pid = fork();
    
    // pid of parent will get process id of child
    // pid of child will get 0
    // pid if the fork fails will get -1
    
    // freviously we used wait(&status) with fork using exit(x), x as a status code for wait trigger on any value >0
    // now we use exec
    
    if(pid== -1){
        // fork failed
        printf("fork unsucessfull\n");
        exit(1);
    }
    else if(pid==0){
        // child
        printf("child\n");
        execl("/bin/ls","ls", (char *)NULL);
        // execl("/bin/ls","ls",NULL);
        exit(2);
    }
    else{
        // parent
        
        printf("parent\n");
        exit(3);
    }

    return 0;
}
