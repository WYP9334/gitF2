#include <stdio.h>
//���������ڴ����������û�й�ϵ���׵�ַ���Ǵӵ�λ��ʼ��
//int a=0x12345678;

int main(){
	int a=0x12345678; //ջ�ϵ������Ǻ���ȳ����Ӹߵ�ַ��ʼ�棬�׵�ַ���ǵ�λ��ַ
	char *p;
	p=(char*)&a;
	if(*p==0x78)
		printf("The little endian\n");
	else
		printf("The big endian\n");
	return 0;
}