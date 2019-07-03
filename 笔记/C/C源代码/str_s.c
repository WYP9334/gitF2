#include <stdio.h>
#include <string.h>

int main(void)
{
	char num[] = "hello";
	char *p = num;

	scanf("%s", p); 
	printf("%s\n", p); 

	return 0;
}