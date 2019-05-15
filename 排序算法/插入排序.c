/*插入排序思路：
1. 从第一个元素开始，该元素可以认为已经被排序
2. 取出下一个元素，在已经排序的元素序列中从后向前扫描
3. 如果该元素（已排序）大于新元素，将该元素移到下一位置
4. 重复步骤3，直到找到已排序的元素小于或者等于新元素的位置
5. 将新元素插入到该位置后
6. 重复步骤2~5
*/
#include <stdio.h>

void insertSort(int *num, int len)
{
	int i, j, temp;
	for (i = 1; i < len; i++) {
		j = i - 1;
		temp = num[i];
		while(num[j] > temp && j >= 0) {//升序排序，降序排序需要num[j] < temp
			num[j + 1] = num[j];
			j--;
		}
		num[++j] = temp;
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
	insertSort(arr, sz);//选择排序
	printf("已经排好序的数组:>  ");
	test(arr, sz);

	return 0;
}