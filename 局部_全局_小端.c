#include <stdio.h>
//和数据在内存中如何增长没有关系；首地址还是从低位开始。
//int a=0x12345678;

int main(){
	int a=0x12345678; //栈上的数据是后进先出，从高地址开始存，首地址还是低位地址
	char *p;
	p=(char*)&a;
	if(*p==0x78)
		printf("The little endian\n");
	else
		printf("The big endian\n");
	return 0;
}