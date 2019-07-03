#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h> //exit函数
#include <unistd.h> //表示Unix标准头文件，close函数
#include <string.h> //strlen函数

int main(int argc, char *argv[])
{
	int fd;
	char buf[1024] = "helloworld";
	if (argc < 2) {
		printf("./app filename\n");
		exit(1);
	}
	
	//fd = open(argv[1], O_CREAT | O_RDWR, 0644);
	fd = open(argv[1], O_RDWR);
	write(fd, buf, strlen(buf));
	printf("fd = %d\n", fd);
	
	close(fd);
	
	return 0;
}