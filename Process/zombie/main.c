#include<stdio.h>
#include<sys/wait.h>
#include<unistd.h>
#include<signal.h>

void func(int signum){
    printf("Im in func()\n");
    wait(NULL);
}

int main()
{
    pid_t child_pid;
    int status;
    int counter = 0;
    child_pid = fork();
    
    if(child_pid == 0)
    {
        printf("child process termination\n");
        while(1);
    }else{
        signal(SIGCHLD,func);
        printf("Parent process");
        while(1);
    }   

    
}