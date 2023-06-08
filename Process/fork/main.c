#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main(int argc,char const *argv[])
{
	pid_t child_pid;
	int counter = 2;
	printf("Gia tri kho itao cua counter: %d\n",counter);
	
	child_pid = fork();  //Child copy all elements of parents
	if(child_pid == 0){ 				//Process of child
		printf("\nIm the child process, counter : %d\n",++counter);
		printf("My PID is: %d,my parent PID id : %d\n",getpid(),getppid());
	}else{ 						//Process of parent
		printf("\nIm the parent  process,counter :%d\n",counter);
		printf("My PID is :%d\n",getpid());
		while(1);
	}
	return 0;

}



