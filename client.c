#include "myinclude.h"

int main(void)
{
	struct sockaddr_in serveraddr;
	int confd;
	char ipstr[] = "192.168.56.130";

	//1.创建一个socket
	confd = socket(AF_INET, SOCK_STREAM, 0); 
	//2.初始化服务器地址
	bzero(&serveraddr, sizeof(serveraddr));
	serveraddr.sin_family = AF_INET;
	//"192.168.6.254"
	inet_pton(AF_INET, ipstr, &serveraddr.sin_addr.s_addr);
	serveraddr.sin_port = htons(SERVER_PORT);
	//3.链接服务器
	connect(confd, (struct sockaddr *)&serveraddr, sizeof(serveraddr));

	//4.请求服务器处理数据

	//5.关闭socket
	close(confd);
     
	return 0;
}