#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>


int main(int argc,char const *argv[])
{
    pid_t child_pid;
    int cnt = 0;
    child_pid = fork();
    pid_t parent_pid = getppid();
    if(child_pid == 0){
        printf("\nIm in a child process with cnt: %d\nChild Pid is :%d\n",++cnt,child_pid);
    }else{
        printf("\nIm in the parent process with cnt: %d\n and Parent Id is: %d\n\n\n",cnt,parent_pid);
        while(1);
    }



}