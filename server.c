#include "myinclude.h"

int main(void)
{
	struct sockaddr_in serveraddr, clientaddr;
	int sockfd, addrlen, confd;
	char ipstr[128];


	//1.socket
	sockfd = socket(AF_INET, SOCK_STREAM, 0);
	//2.bind
	bzero(&serveraddr, sizeof(serveraddr));
	//��ַ��Э��IPV4
	serveraddr.sin_family = AF_INET;
	//IP��ַ
	serveraddr.sin_addr.s_addr = htonl(INADDR_ANY);
	serveraddr.sin_port = htons(SERVER_PORT);
	bind(sockfd, (struct sockaddr *)&serveraddr, sizeof(serveraddr));
	//3.listen
	listen(sockfd, 128);
	while (1) {
		//4.accept���������ͻ�����������
		addrlen = sizeof(clientaddr);
		confd = accept(sockfd, (struct sockaddr *) &clientaddr, &addrlen);
		//����ͻ���IP��ַ�Ͷ˿ں�
		printf("client IP:%s\tport:%d\n", inet_ntop(AF_INET,
		&clientaddr.sin_addr.s_addr, ipstr, sizeof(ipstr)),
		ntohs(clientaddr.sin_port));
		//�Ϳͻ��˽������ݲ���confd
		//5.����ͻ�������δ����

		close(confd);
	}
	close(sockfd);

	return 0;
}