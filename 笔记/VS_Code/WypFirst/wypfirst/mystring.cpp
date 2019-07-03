//#include <stdio.h>
//#include <stdlib.h>
//
//int mystrcmp(const char *str1, const char *str2);
//const char *mystrstr(const char *str1, const char *str2);
//char *mystrcpy(char *str1, const char *str2);
//
//int mystrcmp(const char *str1, const char *str2)
//{
//	if (str1 == NULL || str2 == NULL)
//	{
//		printf("string is error!\n");
//		exit(0);
//	}
//	while (str1 != '\0' && str2 != '\0' && str1 == str2)
//	{
//		str1++;
//		str2++;
//	}
//	if (str1 != '\0' && str2 == '\0')  //str2较短
//		return 1;
//	if (str1 == '\0' && str2 != '\0')  //str1较短
//		return -1;
//	if (str1 > str2)                   //str1较大
//		return 1;
//	if (str1 < str2)                   //str2较大
//		return -1;
//	return 0;                          //相等
//}
//
//const char *mystrstr(const char *str1, const char *str2)
//{
//	const char *src, *sub;
//	if (str1 == NULL || str2 == NULL)
//	{
//		printf("string is error!\n");
//		exit(0);
//	}
//	while (*str1 != '\0') {
//		src = str1;
//		sub = str2;
//		do {
//			if (*sub == '\0')
//				return str1;
//		}
//		while (*src++ == *sub++);
//		str1++;
//	}
//	return NULL;
//}
//
//char *mystrcpy(char *str1, const char *str2)
//{
//	char *p = str1;
//	if (p == NULL || str2 == NULL)
//	{
//		printf("string is error!\n");
//		exit(0);
//	}
//	while (*str2 != '\0') {
//		*p = *str2;
//		p++;
//		str2++;
//	}
//	*p = '\0';
//	return str1;
//}
//
//int main(void)
//{
//	char *str1 = "abc", *str2 = "abC";
//	printf("比较后的结果：%d\n", mystrcmp(str1, str2));
//	return 0;
//}