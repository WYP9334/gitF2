#include <stdio.h>
#include <sys/types.h>
#include <signal.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <ctype.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <pthread.h>

void sys_err(char *str, int exitno)
{
	perror(str);
	exit(exitno);
}