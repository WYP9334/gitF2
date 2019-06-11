/*快速排序(Quick Sort)使用分治法策略。
它的基本思想是：选择一个基准数，通过一趟排序将要排序的数据分割成独立的两部分；
其中一部分的所有数据都比另外一部分的所有数据都要小。
然后，再按此方法对这两部分数据分别进行快速排序，整个排序过程可以递归进行，
以此达到整个数据变成有序序列。

快速排序流程：
(1) 从数列中挑出一个基准值。
(2) 将所有比基准值小的摆放在基准前面，所有比基准值大的摆在基准的后面(相同的数可以到任一边)；
	在这个分区退出之后，该基准就处于数列的中间位置。
(3) 递归地把"基准值前面的子数列"和"基准值后面的子数列"进行排序。
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//基准值随机
void quickSort(int *arr, int r, int l)
{
	int i = r, j = l, temp, k;

	if (i < j) {
		k = rand() % (j - i + 1) + i - 1;
		temp = arr[k];
		while(i < j) {
			while(arr[j] >= temp && k < j) {
				j--;
			}
			if (k < j) {
				arr[k] = arr[j];
				k = j;
			}
			while(arr[i] <= temp && i < k) {
				i++;
			}
			if (i < k) {
				arr[k] = arr[i];
				k = i;
			}
		}
		arr[k] = temp;
		quickSort(arr, r, k - 1);
		quickSort(arr, k + 1, l);
	}
}
/*//基准值选第一个
void quickSort(int *arr, int l, int r)
{
	if(l < r) {
		int i = l, j = r, temp;

		temp = arr[i];                           //基准值
		while (i < j) {
			while (arr[j] > temp && i < j) { //从右往左找小于基准值的下标；降序找大于基准值
				j--;
			}
			if(i < j) {
				arr[i++] = arr[j];
			}
			while (arr[i] < temp && i < j) { //从左往右找大于基准值的下标；降序找小于基准值
				i++;
			}
			if(i < j) {
				arr[j--] = arr[i];
			}
		}
		arr[i] = temp;
		quickSort(arr, l, i - 1);
		quickSort(arr, i + 1, r);
	}
}*/

void test(int arr[], int sz)
{
	for (int i = 0; i < sz; ++i)
		printf("%d ", arr[i]);
	printf("\n");
}
int main()
{
	srand((unsigned)time(NULL));
	int arr[] = { 2, 5, 6, 1, 8, 0, 4, 6, 8, 7, 9, 6};
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("未排序的数组:>  ");
	test(arr,sz);                    //输出数组中的元素
	quickSort(arr, 0, sz - 1);       //快速排序 = 快排
	printf("已经排好序的数组:>  ");
	test(arr, sz);

	return 0;
}