#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>



int main(int argc,char const *argv[])
{
	pid_t child_pid;
	int counter = 2;
	printf("Gia tri khoi tao cua counter: %d\n",counter);
	child_pid = fork();
	if(child_pid == 0){
		printf("\nIm the child process,counter :%d\n",++counter);
		printf("My PID Is: %d,my Parent PID is : %d\n",getpid(),getppid());
		

	}else{
		printf("Im the parent process,counter: %d\n",counter);
		printf("My Pid is :%d\n",getpid());
		while(1);
	}
	return 0;


}
