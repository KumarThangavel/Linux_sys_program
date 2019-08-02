#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <error.h>
#include <signal.h>
#include <unistd.h>
#include <syslog.h>

int main()
{
    pid_t killpid;

    pid_t mypid   = getpid();
    pid_t myppid  = getppid();

    printf("%d\t%d\n", mypid, myppid);
    kill(mypid, SIGKILL);
    printf("%d\t%d\n", mypid, myppid);
}
