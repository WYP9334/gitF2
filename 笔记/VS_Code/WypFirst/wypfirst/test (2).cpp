//#include <stdio.h>
//#include <malloc.h>
//#include <stdlib.h>
//
//typedef unsigned int u_int;
//
//int main(void)
//{
//	u_int m, n, numm = 0, k, last = 0, t = 0, q = 0;
//	u_int money, counter = 0;
//	scanf("%d %d", &m, &n);
//	u_int* num = (u_int *)malloc(sizeof(u_int) * n);
//	for (u_int i = 0; i < n; i++)
//		scanf("%d", num + i);
//	
//	for (u_int i = 0; i < n; i++)
//		numm += num[i];
//	
//	k = m / numm;
//	last = m % (k * numm);
//
//	q = last / 2;
//
//	for (u_int i = 0; i < n; i++)
//	{
//		if (last == num[i])
//			t++;
//	}
//
//	if (t == 0)
//		exit(-1);
//
//	counter = k * n + t;
//
//	printf("%d\n", counter);
//
//	return 0;
//}