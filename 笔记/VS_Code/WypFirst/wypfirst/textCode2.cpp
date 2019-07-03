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
//	int **numN = (int **)malloc(sizeof(int *) * n);
//	for (int i = 0; i < n; i++) {
//		int *numM = (int *)malloc(sizeof(int) * m);
//		for (int i = 0; i < m; i++) {
//			scanf("%d", &numM[i]);
//		}
//		numN[i] = numM;
//	}
//
//	/*
//	数据处理
//	*/
//
//	/*释放申请内存*/
//	for (int i = 0; i < n; i++) {
//		free(numN[i]);
//		numN[i] = NULL;
//	}
//	free(numN);
//	numN = NULL;
//
//	return 0;
//}