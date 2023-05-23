#include<stdio.h>
#include<signal.h>

void main()
{
	sigset_t my_set;
	sigemptyset(&my_set); //Fill all the mask number of signal table equal to 0
	sigaddset(&my_set,SIGINT); // Add a SIGINTERRUPT to the signal table and set mask number equal to 1;
	sigprocmask(SIG_BLOCK,&my_set,NULL);
	while(1);

}
	
