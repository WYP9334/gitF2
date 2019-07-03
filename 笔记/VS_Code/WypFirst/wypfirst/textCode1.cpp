//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void)
//{
//	int n, m;
//	scanf("%d%d", &n, &m);
//	if (n < 0 || m < 0) {
//		exit(1);
//	}
//	int *num = (int *)malloc(sizeof(int) * n*m);
//	for (int i = 0; i < n*m; i++) {
//		scanf("%d", &num[i]);
//	}
//
//	/*
//	数据处理
//	*/
//	
//	/*释放申请内存*/
//	free(num);
//	num = NULL;
//
//	return 0;
//}