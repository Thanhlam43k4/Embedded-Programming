//Program to ignore a basic signal
#include<stdio.h>
#include<signal.h>

void my_signal_handler(int signo) //Function of signal handler

{
	printf("my handler is called\n");

}

void main()
{
	signal(SIGINT,my_signal_handler);  //Function to ignore signal
	while(1);

}
