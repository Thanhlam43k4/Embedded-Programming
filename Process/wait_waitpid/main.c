#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>
#include<stdint.h>


int main(int argc,char const *argv[]){
    pid_t child_pid;
    int status,ret_pid;
    child_pid = fork();
    if(child_pid == 0){
            printf("Im in the child process with pid : %d\n",getpid());\
            printf("Child process will terminate in 5 seconds");
            sleep(5);
            exit(-1);       
    }else{
        ret_pid = wait(&status);
        if(ret_pid == -1){
            printf("wait () unsuccessfull\n");
        }else{
            printf("\n Im in Parent process,PID child process : %d\n ",ret_pid);
        }
        
                if(WIFEXITED(wstatus)) {
                       printf("exited, status=%d\n", WEXITSTATUS(wstatus));
                   } else if (WIFSIGNALED(wstatus)) {
                       printf("killed by signal %d\n", WTERMSIG(wstatus));

    }




}