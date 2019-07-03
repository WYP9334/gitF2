#include <stdio.h>
 /************************************************************************
 *冒泡排序是排序算法中较为简单的一种，英文名称为bubble sort。
 *方法一：从前面开始遍历所有数据，每次对相邻的元素进行两两对比。升序排序：每次遍历把大元素
 *        往后排；降序排序：每次遍历把小元素往后排。
 *方法二：从后面开始遍历所有数据，每次对相邻的元素进行两两对比。升序排序：每次遍历把小元素
 *        往前排；降序排序：每次遍历把大元素往前排。
 *平均时间复杂度：O(n2)
 *空间复杂度：O(1)
 *当数据量大时，冒泡算法的效率并不高。
 **************************************************************************/
void swap(int *t1, int *t2)
{
	int temp;
	temp = *t1;
	*t1 = *t2;
	*t2 = temp;
}
/*从前面开始对比排序*/
void bubble_sort_asc(int arr[], int len)
{
	int i, j;
 
	for (i = 0; i < len -1; i++) {
		for (j = 0; j < len -1 -i; j++) {
			if (arr[j] > arr[j + 1]) {  //将大的往后排
				swap(&arr[j], &arr[j + 1]);
			}
		}
	}
}

void bubble_sort_des(int arr[], int len)
{
	int i, j;
 
	for (i = 0; i < len -1; i++) {
		for (j = 0; j < len -1 -i; j++) {
			if (arr[j] < arr[j + 1]) {   //将小的往后排
				swap(&arr[j], &arr[j + 1]);
			}
		}
	}
}
/*从后面开始对比排序*/
//void bubble_sort_asc(int arr[], int len)
//{
//	int i, j;
// 
//	for (i = 0; i < len - 1; i++) {
//		for (j = len - 1; j > i ; j--) {
//			if (arr[j - 1] > arr[j]) {    //将小的往前排
//				swap(&arr[j - 1], &arr[j]);
//			}
//		}
//	}
//}
//void bubble_sort_des(int arr[], int len)
//{
//	int i, j;
// 
//	for (i = 0; i < len - 1; i++) {
//		for (j = len - 1; j > i ; j--) {
//			if (arr[j - 1] < arr[j]) {    //将小的往前排
//				swap(&arr[j - 1], &arr[j]);
//			}
//		}
//	}
//}

int main()
{
	int arr1[] = {34, 27, 55, 8, 97, 67, 35, 43, 22, 101, 78, 96, 35, 99};
	int i;
	int len = sizeof(arr1) / sizeof(*arr1);
    
	bubble_sort_asc(arr1, len);
	printf("len = %d \n", len);
	printf("use bubble sort asc the arrary is: ");
    
	for(i = 0; i < len; i++){
		printf("%d ", arr1[i]);
	}
	printf("\n");
	bubble_sort_des(arr1, len);
	printf("use bubble sort des the arrary is: ");
    
	for(i = 0; i < len; i++){
		printf("%d ", arr1[i]);
	}
	printf("\n");
	return 0;
}