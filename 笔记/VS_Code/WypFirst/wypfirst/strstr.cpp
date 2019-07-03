#include <stdio.h>
#include <string.h>

int main(void)
{
	char *str1 = "Borland International", *str2 = "national !";
	char *result;
	result = strstr(str1, str2);
	if (result)
		printf("The substring is: %s\n", result);
	else
		printf("Not found the substring");
	return 0;
}