#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<fcntl.h>

int main(void)
{
	int fd;
	int numb_read,numb_write;
	char str[12]= "Hello world\n";
	

	fd = open("Hello.txt",O_CREAT | O_RDWR,0667);
	if(fd == -1)	
	{
		printf("Open file Hello.txt Failed\n");
	}	
	numb_write = write(fd,str,strlen(str));
	lseek(fd,12,SEEK_SET);
	
	write(fd,"AAAAAAAAAA",strlen("AAAAAAAAAAA"));
	close(fd);


	return 0;
}
