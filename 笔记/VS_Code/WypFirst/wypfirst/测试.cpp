//*京东编程题第一题*/
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void)
//{
//	unsigned sumRatio = 0;
//	float average = 0, minDR = 0;
//	unsigned int n, V;
//	scanf("%u %u", &n, &V);
//	unsigned int *pRatio = (unsigned int *)malloc(sizeof(unsigned int) * n);
//	unsigned int *pDrink = (unsigned int *)malloc(sizeof(unsigned int) * n);
//	for (int i = 0; i < n; i++) {
//		scanf("%u", pRatio + i);
//	}
//	for (int i = 0; i < n; i++) {
//		scanf("%u", pDrink + i);
//	}
//
//	for (int i = 0; i < n; i++) {
//		sumRatio += *(pRatio + i);
//	}
//	average = V / sumRatio;
//	minDR = *pDrink / *pRatio;
//	for (int i = 0; i < n; i++) {
//		if (minDR > (*(pDrink + i) / *(pRatio + i))) {
//			minDR = *(pDrink + i) / *(pRatio + i);
//		}
//	}
//	if (minDR > average)
//		printf("%.4f\n", (float)V);
//	else
//		printf("%.4f\n", minDR * sumRatio);
//
//	return 0;
//}