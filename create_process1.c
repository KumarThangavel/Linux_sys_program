#include<stdio.h>
#include<unistd.h>

void main()
{
	pid_t pid;
	pid = system();
	printf("pid= %d\n", pid);
}
