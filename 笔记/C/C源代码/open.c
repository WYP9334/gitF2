#include <E:/笔记/C/C源代码/mylib.h>

/*
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
//int main(int argc, char *argv[])
int main(void)
{
	int fd;
	
	fd = open("abc", O_CREAT, 0777);
	printf("fd = %d\n", fd);
	
	return 0;
}
*/

/*
#include <sys/types.h>
#include <unistd.h>
#include <sys/stat.h>
#include <stdio.h>

int main(void)
{
		char buf[1024];
		int len;
		
		len = read(STDIN_FILENO, buf, sizeof(buf));
		write(STDOUT_FILENO, buf, len);
		
		return 0;
}
*/

/*
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <errno.h> //errno是全局变量
#include <string.h>

int main(void)
{
	int fd = open("abc", O_WRONLY);
	if (fd < 0) {
		//printf("errno = %d\n", errno);
		//perror("main open");
		printf("wyp:%s\n", strerror(errno));
	}
	printf("fd = %d\n", fd);
	return 0;
}
*/

/*
//非阻塞读终端
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#define MSG_TRY	"try again\n"

int main(void)
{
	char buf[10];
	int fd, n;
	fd = open("/dev/tty", O_RDONLY | O_NONBLOCK);
	if (fd < 0) {
		perror("open /dev/tty");
		exit(1);
	}
	
tryagain:
	n = read(fd, buf, 10);
	if (n < 0) {
		if (errno == EAGAIN) {
			sleep(1);
			write(STDOUT_FILENO, MSG_TRY, strlen(MSG_TRY));
			goto tryagain; //没有数据会死循环
		}
		perror("read /dev/tty");
		exit(1);
	}
	write(STDOUT_FILENO, buf, n);
	close(fd);
	return 0;
}
*/

/*	
//非阻塞读终端和等待超时
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#define MSG_TRY	"try again\n"
#define MSG_TIMEOUT "timeout\n"

int main(void)
{
	char buf[10];
	int fd, n, i;
	
	fd = open("/dev/tty", O_RDONLY | O_NONBLOCK);
	if (fd < 0) {
		perror("open /dev/tty");
		exit(1);
	}
	
	for (i = 0; i < 5; i++) {
		n = read(fd, buf, 10);
		if (n < 0)
			break;
		if (errno != EAGAIN) {
			perror("read /dev/tty");
			exit(1);
		}
		sleep(1);
		write(STDOUT_FILENO, MSG_TRY, strlen(MSG_TRY));
	}
	if (i == 5)
		write(STDOUT_FILENO, MSG_TIMEOUT, strlen(MSG_TIMEOUT));
	else
		write(STDOUT_FILENO, buf, n);
	close(fd);
	return 0;
}
*/

/*
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
	char buf[10] = "wyp";
	int fd = open("abc", O_CREAT | O_RDWR | O_TRUNC, 0664);
	if (fd < 0) {
		perror("open abc");
		exit(-1);
	}
	
	//拓展一个文件，一定要有一次写操作
	lseek(fd, 0x1000, SEEK_SET);
	write(fd, buf, strlen(buf));
	
	printf("abc size = %d\n", lseek(fd, 0, SEEK_END));
	
	close (fd);
	return 0;
}
*/

/*
	int flags;
	flags = fcntl(STDIN_FILENO, F_GETFL);
	flags |= O_NONBLOCK;
	if (fcntl(STDIN_FILENO, F_SETFL, flags) == -1) {
		perror("fcntl");
		exit(1);
	}
*/

/*
//ioctl_fb.c获取屏幕的分辨率
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <linux/fb.h>

int main(void)
{
	int fd;
	struct fb_var_screeninfo fb_info;
	
	fd = open("/dev/fb0", O_RDONLY);
	if (fd < 0) {
		perror("open /dev/fb0");
		exit(1);
	}
	
	ioctl(fd, FBIOGET_VSCREENINFO, &fb_info);
	printf("R= %d\nC= %d\n", fb_info.xres, fb_info.yres);
	
	close (fd);
	
	return 0;
}
*/

/*
//获取图像窗口的长和宽
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/ioctl.h>

int main(void)
{
	struct winsize size;
	if (isatty(STDOUT_FILENO) == 0)
		exit(1);
	if (ioctl(STDOUT_FILENO, TIOCGWINSZ, &size) < 0) {
		perror("ioctl TIOCGWINSZ error");
		exit(1);
	}
	printf("%d rows, %d columns\n", size.ws_row, size.ws_col);
	return 0;
}
*/

/*
//实现ls -l files功能
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <grp.h>
#include <pwd.h>
#include <time.h>

int main(int argc, char *argv[])
{
        struct stat buf;
        char type, ownrd, ownwt, ownet, grprd, grpwt, grpet, othrd, othwt, othet;
        struct passwd *pa;
        struct group *gp;
        struct tm *ct;

        if (argc < 2) {
                printf("./ls files\n");
                exit(1);
        }

        if (stat(argv[1], &buf) < 0) {
                perror("stat");
                exit(1);
        }
        printf("%s\t%ld\n", argv[1], buf.st_size);

        //file type & mode (permissions)
        if (S_ISDIR(buf.st_mode))
                type = 'd';
        else if (S_ISCHR(buf.st_mode))
                type = 'c';
        else if (S_ISBLK(buf.st_mode))
                type = 'b';
        else if (S_ISFIFO(buf.st_mode))
                type = 'p';
        else if (S_ISLNK(buf.st_mode))
                type = 'l';
        else if (S_ISSOCK(buf.st_mode))
                type = 's';
        else
                type = '-';
		
		if (buf.st_mode & S_IRUSR)
                ownrd = 'r';
        if (buf.st_mode & S_IWUSR)
                ownwt = 'w';
        if (buf.st_mode & S_IXUSR)
                ownet = 'x';
        if (buf.st_mode & S_IRGRP)
                grprd = 'r';
        if (buf.st_mode & S_IWGRP)
                grpwt = 'w';
        if (buf.st_mode & S_IXGRP)
                grpet = 'x';
        if (buf.st_mode & S_IROTH)
                othrd = 'r';
        if (buf.st_mode & S_IWOTH)
                othwt = 'w';
        if (buf.st_mode & S_IXOTH)
                othet = 'x';

        pa = getpwuid(buf.st_uid);
        gp = getgrgid(buf.st_gid);

        ct = localtime(&buf.st_ctime);

        printf("%c%c%c%c%c%c%c%c%c%c %lu %s %s %ld %2d %2d %d:%d %s\n",
                type, ownrd, ownwt, ownet, grprd, grpwt, grpet, othrd, othwt, othet,
                buf.st_nlink, pa->pw_name, gp->gr_name, buf.st_size,
                ct->tm_mon + 1, ct->tm_mday, ct->tm_hour, ct->tm_min, argv[1]);
        return 0;
}
*/

/*
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(void)
{
	if (access("abc", F_OK) < 0)
	{
		perror("abc");
		exit(1);
	}
	 
	printf("abc is ok\n");
	
	return 0;
}


/*
//chmod功能实现
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <errno.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	if (argc < 3) {
		printf("./mychmod mode filename\n");
		exit(1);
	}
	if (access(argv[2], F_OK) < 0) {
		perror("argv[2]");
		exit(1);
	}
	
	chmod(argv[2], strtol(argv[1], NULL, 8));
	printf("argv[1]的八进制：%o\n", strtol(argv[1], NULL, 8));
	
	return 0;
}
*/

/*
#include <stdio.h>
#include <unistd.h>

#define SIZE 4096

int main(void)
{
	char buf[SIZE];
	
	chdir("/");
	printf("%s\n", getcwd(buf, sizeof(buf)));
	
	return 0;
}
*/

/*
//允许取文件名的最大长度
#include <stdio.h>
#include <unistd.h>

int main(void)
{
	printf("%ld\n", fpathconf(STDOUT_FILENO, _PC_NAME_MAX));
	printf("%ld\n", pathconf("aaa", _PC_NAME_MAX));
	return 0;
}
*/


//读取目录内容
/*
0170000  001111000000000000
0140000  001100000000000000
0120000  001010000000000000
0100000  001000000000000000
0060000  000110000000000000
0040000  000100000000000000
0020000  000010000000000000
0010000  000001000000000000
*/
/*
#include <stdio.h>
#include <string.h>
#include <dirent.h>
#include <sys/types.h>
#include <sys/stat.h>

//dirwalk: apply fcn to all files in dir
void dirwalk(char *dir, void (*fcn)(char *))
{
	char name[MAX_PATH];
	struct dirent *dp;
	DIR *dfd;
	
	if ((dfd = opendir(dir)) == NULL) {
		fprintf(stderr, "dirwalk: can't open %s\n", dir);
		return;
	}
	while ((dp = readdir(dfd)) != NULL) {
		if (strcmp(dp->d_name, ".") == 0 || strcmp(dp->d_name, "..") == 0)
			continue; //skip self and parent
		if (strlen(dir) + strlen(dp->d_name) + 2 > sizeof(name) //"wyp/fiele\0"
			fprintf(stderr, "dirwalk: name %s %s too long\n", dir, dp->d_name);
		else {
			sprintf(name, "%s %s", dir, dp->d_name);
			(*fcn)(name);
		}
	}
	closedir(dfd);
}

//fsize: print the size and name of file "name"
void fsize(char *name)
{
	struct stat stbuf;
	
	if (stat(name, &stbuf) == -1) {
		fprintf(stderr, "fsize: can't access %s\n", name);
		return;
	}
	if ((stbuf.st_mode & S_IFMT) == S_IFDIR)
		dirwalk(name, fsize);//回调函数
	printf("%8ld %s\n", stbuf.st_size, name);
}

int main(int argc, char *argv[])
{
	if (argc == 1) //default: current directory
		fsize(".");
	else
		while (--argc > 0)
			fsize(*++argv);//先取++argv=argv[1],再取里面的值*argv[1]
	return 0;
}
*/

/*
//实现env命令打印环境变量 
#include <stdio.h>

int main(void)
{
	extern char **environ;
	int i;
	for (i = 0; environ[i] != NULL; i++)
		printf("%s\n", environ[i]);
	return 0;
}
*/
 /*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("PATH_WYP=%s\n", getenv("PAYH_WYP"));
	setenv("PATH_WYP", "hello,wyp!", 1);
	printf("PATH_WYP=%s\n", getenv("PATH_WYP"));
	return 0;
}
*/
/*
//fork.c
#include <unistd.h>
#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <sys/types.h>

int main(void)
{
	pid_t pid;
	//调用1次返回2次，在父进程返回子进程的PID，在子进程返回0
	
//	int n = 10;
	pid = fork(); //父子都出来了
	
	if (pid > 0) {
		//parent
		while (1) {
//		printf("I am parent %d\n", n++);
		printf("parent pid = %d\n", getpid());
		printf("parent parent pid = %d\n", getppid());
		sleep(1);
		}
	}
	else if (pid == 0) {
		//child
		while (1) {
//		printf("I am child %d\n", n++);
		printf("child pid = %d\n", getpid());
		printf("child parent pid = %d\n", getppid());
		sleep(3);
		}
	}
	else {
		perror("fork");
		exit(1);
	}
	
	return 0;
}
*/

/*
//下面程序消耗内存，注意运行
#include <unistd.h>
#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <sys/types.h>

int main(void)
{
	pid_t pid;
	//调用1次返回2次，在父进程返回子进程的PID，在子进程返回0

	int n = 0, m = 30;
	while (1) {
		pid = fork(); //父子都出来了
		if (pid == 0)
			break;
		else if (pid > 0)
			printf("%d\n", n++);
		else
			exit(1);
	}
	
	while (m--)
		sleep(1);
	
	return 0;
}
*/

/*
#include <stdio.h>
#include <unistd.h>

int main(void)
{
	printf("hello\n");
	
	execl("/bin/ls", "ls", "-l", NULL);
	
	printf("world\n");
	return 0;
}
*/

/*
#include <stdio.h>
#include <unistd.h>

int main(void)
{
	pid_t pid;
	
	pid = fork();
	if (pid == 0) {
		//in child
		execlp("
	}
	else if (pid > 0) {
	//in parent
	}
	else {
		perror("fork");
		exit(1);
	}
	
	return 0;
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int main(int argc, char *argv[])
{
	int fd;
	if (argc != 2) {
		//int fputs(const char *s, FILE *stream);
		fputs("usage: ./a.exe file\n", stderr);
		exit(1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd < 0) {
		perror("open");
		exit(1);
	}
	dup2(fd, STDIN_FILENO);
	close(fd);
	execl("./upper", "upper", NULL);
	perror("exec ./upper");
	exit(1);
}
*/

/*
//wait.c
#include <unistd.h>
#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(void)
{
	pid_t pid, pid_c;
	//调用1次返回2次，在父进程返回子进程的PID，在子进程返回0

	pid = fork(); //父子都出来了
	
	if (pid > 0) {
		//parent
		while (1) {
		printf("I am parent %d\n", getpid());
		pid_c = wait(NULL); //wait是一个阻塞函数，等待回收子进程资源，
							//如果没有子进程，wait返回-1
		printf("wait for child %d\n", pid_c);
		sleep(1);
		}
	}
	else if (pid == 0) {
		//child
		printf("I am child %d\n", getpid()); 
		sleep(10);
	}
	else {
		perror("fork");
		exit(1);
	}
	
	return 0;
}
*/

/*
#include <unistd.h>
#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(void)
{
	pid_t pid;
	int n = 3;
	while (n--) {
		pid = fork();
		if (pid == 0)
			break;
	}
	
	if (pid == 0) {  
			printf("I am child %d\n", getpid());
			sleep(3);
		}
	else if (pid > 0) {
		printf("n = %d\n", n);
		n++;
		pid_t pid_c;
		while (1) {
			//pid_c = wait(NULL); //父进程中阻塞，
			printf("I am parent\n");
			pid_c = waitpid(0, NULL, WNOHANG);
			if (pid_c > 0) 
				n++;
			if (pid_c == -1)
				continue;
			else
				printf("wait for child %d\n", pid_c);
			if (n == 3)
				break;
			sleep(1);
		}
	}
	
	return 0;
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
 
int main(void)
{
	pid_t pid;
	pid = fork();
	if (pid < 0) {
		perror("fork faild");
		exit(1);
	}
	if (pid == 0) {
		int i;
		for (i = 3; i > 0; i--) {
			printf("This is the child\n");
			sleep(1);
		}
		exit(3);
	}
	else {
		int stat_val;
		waitpid(pid,  &stat_val, 0);
		if (WIFEXITED(stat_val))
			printf("Child exited with code %d\n", WEXITSTATUS(stat_val));
		else if (WIFSIGNALED(stat_val))
			printf("Child terminated abnormally, signal %d\n", WTERMSIG(stat_val));
	}
	return 0;
}
*/

/*
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <errno.h>

int main(void)
{
	int fd[2];
	pid_t pid;
	char str[1024] = "hello it cast";
	char buf[1024];
	
	//fd[0] 读端
	//fd[1] 写端
	if (pipe(fd) < 0) {
		perror("pipe");
		exit(1);
	}
	
	pid = fork();
	//父写子读
	if (pid > 0) {
		//父进程里，关闭父读fd[0]
		close(fd[0]);
		sleep(5);
		write(fd[1], str, strlen(str));
		close(fd[1]);
		wait(NULL);
	}
	else if (pid == 0) {
		int len, flags;    
		//子进程里闭子写fd[1]
		close(fd[1]);
		
		flags = fcntl(fd[0], F_GETFL);
		flags |= O_NONBLOCK;
		fcntl(fd[0], F_SETFL, flags);
tryagain:
		len = read(fd[0], buf, sizeof(buf));
		if (len == -1) {
			if (errno == EAGAIN) {
				write(STDOUT_FILENO, "try again\n", 10);
				sleep(1);
				goto tryagain;
			}
			else {
				perror("read");
				exit(1);
			}
		}
		sprintf(str, "child %s\n", buf);
		write(STDOUT_FILENO, str, len + 6);
	}
	else {
		perror("fork");
		exit(1);
	}
	return 0;
}
*/

/*
//fifo_w.c
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
*/

/*
//mmap
int main(void)
{
	int fd;
	int *p;
	off_t len;
	fd = open("hello", O_RDWR);
	if (fd < 0)
		sys_err("open", 1);
	
	len = lseek(fd, 0, SEEK_END);
	if (len == -1)
		sys_err("lseek", 2);
	p = mmap(NULL, len, PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0);
	if (p == MAP_FAILED)
		sys_err("mmap", 3);
	
	close(fd);
	p[0] = 0x30313233;
	
	munmap(p, len);
	return 0;
}

































