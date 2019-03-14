//fifo_w.c写端，往管道写入数据
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

void sys_err(char *str, int exitno)
{
	perror(str);
	exit(exitno);
}

int main(int argc, char *argv[])
{
	int fd;
	char buf[1024] = "hello wyp\n";
	if (argc < 2) {
		printf("./fifo_w.out fifoname");
		exit(1);
	}
	
	fd = open(argv[1], O_WRONLY);
	if (fd < 0)
		sys_err("open", 1);
	
	write(fd, buf, strlen(buf));
	close(fd);
	
	return 0;
}