#include "wrap.h"
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
#include <semaphore.h>
#include <fcntl.h>
/*套接字相关头文件*/
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netinet/in.h> //定义了INADDR_ANY

#define SERVER_PORT     8000
#define NUM     5