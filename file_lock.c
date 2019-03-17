#include "myinclude.h"

int main(int argc, char *argv[])
{
	int fd; 
	struct flock f_lock;
     
	if (argc < 2) {
		printf("./a.out fliename\n");
		exit(1);
	}
     
	if ((fd = open(argv[1], O_RDWR) < 0)) 
	sys_err("open", 2); 

	f_lock.l_type = F_WRLCK; //ѡ�ö���
	//f_lock.l_type = F_RDLCK; //ѡ��д��

	f_lock.l_whence = SEEK_SET;
	f_lock.l_start = 0;
	f_lock.l_len = 0; //0��ʾ�����ļ�����

	fcntl(fd, F_SETLKW, &f_lock);
	printf("get flock\n");

	sleep(10);
     
	f_lock.l_type = F_UNLCK;
	fcntl(fd, F_SETLKW, &f_lock);
	printf("un flock\n");

	close(fd);

	return 0;
}
