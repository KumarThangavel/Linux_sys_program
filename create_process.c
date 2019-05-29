#include<stdio.h>
#include<unistd.h>

void main()
{
	pid_t pid;
	pid = fork();
	if(pid == 0)
	{
		 printf("Child process. [PID]=%d\n", pid);
	}
	else if(pid < 0)
	{
		printf("Process creation failed. [PID]=%d\n", pid);
	}
	else
	{
		printf("parent process. [PID]=%d\n", pid);
	}
}
