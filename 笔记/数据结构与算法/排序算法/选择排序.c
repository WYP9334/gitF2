/*选择排序（Selection sort）是一种简单直观的排序算法。
 *它的工作原理是每一次从待排序的数据元素中选出最小（或最大）的一个元素，
 *存放在序列的起始位置，直到全部待排序的数据元素排完。
 */
 
#include <stdio.h>

void selectionSort(int *num, int len)  //选择排序升序排列
{
	int i, j, temp, minIndex;

	for (i = 0; i < len; i++) {
		minIndex = i;
		for (j = i + 1; j < len; j++) {
			if (num[j] < num[minIndex]) {  //降序>
				minIndex = j;
			}
		}
		if (num[minIndex] < num[i]) {      //降序>
			temp = num[minIndex];
			num[minIndex] = num[i];
			num[i] = temp;
		}
	}
}

void test(int arr[], int sz)
{
	for (int i = 0; i < sz; ++i)
		printf("%d ", arr[i]);
	printf("\n");
}

int main()
{
	int arr[] = { 2, 5, 6, 1, 8, 0, 4, 6, 8, 7, 9, 6};
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("未排序的数组:>  ");
	test(arr,sz);//输出数组中的元素
	selectionSort(arr, sz);//选择排序
	printf("已经排好序的数组:>  ");
	test(arr, sz);
	
	return 0;
}