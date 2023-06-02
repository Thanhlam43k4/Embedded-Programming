#include<string.h>
#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>



int main(void)
{
	int fd;
	int num_read;
	
	char str[2] = "Hi";
	fd = open("File_data.txt",O_APPEND| O_CREAT |O_RDWR,0667);
	if(fd == -1)
	{
		printf("Open file File_data.txt failed\n");

	}
	num_read = write(fd,str,strlen(str));
	printf("Write %d bytes to File_data.txt\n",num_read);
	

	lseek(fd,0,SEEK_SET);
	write(fd,"Add text",strlen("Add text"));
	

	close(fd);
			

}
