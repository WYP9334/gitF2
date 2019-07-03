//#include <stdio.h>
//#include <malloc.h>
//
//int main(void)
//{
//	int n, s;
//	char ch;
//	scanf("%d%d", &n, &s);
//	int* num = (int *)malloc(sizeof(int) * n);
//	for (int i = 0; i < n; i++)
//		scanf("%d", num + i);
//	int x = 1, y = 1, z = 1, k = 1, e = n - s;
//
//	for (int i = 1; i <= n; i++)
//		x = i * x;
//	for (int i = 1; i <= s; i++)
//		y = i * y;
//	for (int i = 1; i <= e; i++)
//		z = i * z;
//	for (int i = 1; i <= e; i++)
//		k = 2 * k;
//
//
//	printf("%d\n", x * k / (y * z));
//
//	return 0;
//}