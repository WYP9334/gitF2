//#include <stdio.h>
//#include <stdlib.h>
////void insertSort(int *num, int len)
////{
////	int i, j, temp;
////	for (i = 0; i < len - 1; i++) {
////		j = i + 1;
////		temp = num[j]; //temp存储新元素
////		while(temp < num[--j] && j >= 0) {//升序排序，降序排序需要num[j] < temp
////			num[j + 1] = num[j];
////		}
////		num[j + 1] = temp;
////	}
////}
//void insertSort(int *arr, int len)
//{
//	int i, j, temp;
//
//	for (i = 0; i < len; i++) {
//		j = i;
//		temp = arr[j];
//		while(temp < arr[--j] && j >= 0) {
//			arr[j + 1] = arr[j];
//		}
//		arr[j + 1] = temp;
//	}
//}
//void test(int arr[], int sz)
//{
//	for (int i = 0; i < sz; ++i)
//		printf("%d ", arr[i]);
//	printf("\n");
//}
//int main()
//{
//	int arr[] = { 2, 5, 6, 1, 8, 0, 4, 6, 8, 7, 9, 6};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("未排序的数组:>  ");
//	test(arr,sz);//输出数组中的元素
//	insertSort(arr, sz);//选择排序
//	printf("已经排好序的数组:>  ");
//	test(arr, sz);
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//void selectSort(int *arr, int len)
//{
//	int i, j, temp, minIndex;
//
//	for (i = 0; i < len; i++) {
//		minIndex = i;
//		for (j = i; j < len; j++) {
//			if( arr[j] < arr[minIndex]) {
//				minIndex = j;
//			}
//		}
//		if (minIndex != i) {
//			temp = arr[i];
//			arr[i] = arr[minIndex];
//			arr[minIndex] = temp;
//		}
//	}
//}
//void test(int arr[], int sz)
//{
//	for (int i = 0; i < sz; ++i)
//		printf("%d ", arr[i]);
//	printf("\n");
//}
//int main()
//{
//	int arr[] = { 2, 5, 6, 1, 8, 0, 4, 6, 8, 7, 9, 6};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("未排序的数组:>  ");
//	test(arr,sz);//输出数组中的元素
//	selectSort(arr, sz);//选择排序
//	printf("已经排好序的数组:>  ");
//	test(arr, sz);
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//void quickSort(int *arr, int l, int r)
//{
//	int i = l, j = r, temp, k;
//	if (i < j) {
//		k = rand() % (j - i + 1) + i - 1;
//		temp = arr[k];
//		while(i < j) {
//			while(arr[j] >= temp && j > k) {
//				j--;
//			}
//			if (j > k) {
//				arr[k] = arr[j];
//				k = j;
//			}
//
//			while(arr[i] <= temp && i < k) {
//				i++;
//			}
//			if (i < k) {
//				arr[k] = arr[i];
//				k = i;
//			}
//		}
//
//		arr[k] = temp;
//		quickSort(arr, l , k - 1);
//		quickSort(arr, k + 1, r);
//	}
//
//}
//void test(int arr[], int sz)
//{
//	for (int i = 0; i < sz; ++i)
//		printf("%d ", arr[i]);
//	printf("\n");
//}
//int main()
//{
//	srand((unsigned int) time(NULL));
//	int arr[] = { 2, 5, 6, 1, 8, 0, 4, 6, 8, 7, 9, 6};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("未排序的数组:>  ");
//	test(arr,sz);                    //输出数组中的元素
//	quickSort(arr, 0, sz - 1);       //快速排序 = 快排
//	printf("已经排好序的数组:>  ");
//	test(arr, sz);
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//void quickSort(int *arr, int l, int r)
//{
//	int i = l, j = r, temp;
//
//	if (i < j) {
//		temp = arr[i];
//		while(i < j) {
//			while(arr[j] >= temp && j > i) {
//				j--;
//			}
//			if (j > i) {
//				arr[i++] = arr[j];
//			}
//
//			while(arr[i] <= temp && j > i) {
//				i++;
//			}
//			if (j > i) {
//				arr[j--] = arr[i];
//			}
//		}
//
//		arr[i] = temp;
//		quickSort(arr, l, i - 1);
//		quickSort(arr, i + 1, r);
//	}
//}
//void test(int arr[], int sz)
//{
//	for (int i = 0; i < sz; ++i)
//		printf("%d ", arr[i]);
//	printf("\n");
//}
//int main()
//{
//	int arr[] = { 2, 5, 6, 1, 8, 0, 4, 6, 8, 7, 9, 6};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("未排序的数组:>  ");
//	test(arr,sz);                    //输出数组中的元素
//	quickSort(arr, 0, sz - 1);       //快速排序 = 快排
//	printf("已经排好序的数组:>  ");
//	test(arr, sz);
//	system("pause");
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//void bubbleSort(int *arr, int len)
//{
//	int i, j, temp;
//
//	for (i = 0; i < len - 1; i++) {
//		for ( j = 0; j < len - 1 - i; j++) {
//			if (arr[j] > arr[j + 1]) {
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr1[] = {34, 27, 55, 8, 97, 67, 35, 43, 22, 101, 78, 96, 35, 99};
//	int i;
//	int len = sizeof(arr1) / sizeof(*arr1);
//    
//	bubbleSort(arr1, len);
//	printf("len = %d \n", len);
//	printf("use bubble sort asc the arrary is: ");
//    
//	for(i = 0; i < len; i++){
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//void selectSort(int *arr, int len)
//{
//	int i, j, temp, max, count;
//	
//	for (i = 0; i < len; i++) {
//		count = i;
//		max = arr[count];
//		for (j = i; j < len; j++) {
//			if (arr[j] > max) {
//				max = arr[j];
//				count = j;
//			}
//		}
//		temp = arr[count];
//		arr[count] = arr[i];
//		arr[i] = temp;
//	}
//}
////void selectionSort(int *num, int len)  //选择排序升序排列
////{
////	int i, j, temp, minIndex;
////
////	for (i = 0; i < len - 1; i++) {
////		minIndex = i;
////		for (j = i + 1; j < len; j++) {
////			if (num[j] < num[minIndex]) {  //降序>
////				minIndex = j;
////			}
////		}
////		if (num[minIndex] < num[i]) {      //降序>
////			temp = num[minIndex];
////			num[minIndex] = num[i];
////			num[i] = temp;
////		}
////	}
////}
//void test(int arr[], int sz)
//{
//	for (int i = 0; i < sz; ++i)
//		printf("%d ", arr[i]);
//	printf("\n");
//}
//int main()
//{
//	int arr[] = { 2, 5, 6, 1, 8, 0, 4, 6, 8, 7, 9, 6};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("未排序的数组:>  ");
//	test(arr,sz);//输出数组中的元素
//	selectSort(arr, sz);//选择排序
//	printf("已经排好序的数组:>  ");
//	test(arr, sz);
//	system("pause");
//	return 0;
//}



























//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
//
//void quickSort(int *arr, int r, int l)
//{
//	int i = r, j = l, temp, k;
//
//	if (i < j) {
//		k = rand() % (j - i + 1) + i - 1;
//		temp = arr[k];
//		while(i < j) {
//			while(arr[j] >= temp && k < j) {
//				j--;
//			}
//			if (k < j) {
//				arr[k] = arr[j];
//				k = j;
//			}
//			while(arr[i] <= temp && i < k) {
//				i++;
//			}
//			if (i < k) {
//				arr[k] = arr[i];
//				k = i;
//			}
//		}
//		arr[k] = temp;
//		quickSort(arr, r, k - 1);
//		quickSort(arr, k + 1, l);
//	}
//}
//void test(int arr[], int sz)
//{
//	for (int i = 0; i < sz; ++i)
//		printf("%d ", arr[i]);
//	printf("\n");
//}
//int main()
//{
//	srand((unsigned)time(NULL));
//	int arr[] = { 2, 5, 6, 1, 8, 0, 4, 6, 8, 7, 9, 6};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("未排序的数组:>  ");
//	test(arr,sz);                    //输出数组中的元素
//	quickSort(arr, 0, sz - 1);       //快速排序 = 快排
//	printf("已经排好序的数组:>  ");
//	test(arr, sz);
//	system("pause");
//	return 0;
//}




























//#include <stdio.h>
//#include <stdlib.h>
//
//void swap(int *a, int *b) {
//    int temp = *b;
//    *b = *a;
//    *a = temp;
//}
//
//void max_heapify(int arr[], int start, int end) {   //
//    // 建立父节点指标和子节点指标
//    int dad = start;
//    int son = dad * 2 + 1;
//    while (son <= end) { // 若子节点指标在范围内才做比较
//        if (son + 1 <= end && arr[son] < arr[son + 1]) // 先比较两个子节点大小，选择最大的
//            son++;
//        if (arr[dad] > arr[son]) // 如果父节点大于子节点代表调整完毕，直接跳出函数
//            return;
//        else { // 否则交换父子内容再继续子节点和孙节点比较
//            swap(&arr[dad], &arr[son]);
//            dad = son;
//            son = dad * 2 + 1;
//        }
//    }
//}
//
//void heap_sort(int arr[], int len) {
//    int i;
//    // 初始化，i从最后一个父节点开始调整
//    for (i = len / 2 - 1; i >= 0; i--)
//        max_heapify(arr, i, len - 1);
//    // 先将第一个元素和已排好元素前一位做交换，再重新调整，直到排序完毕
//    for (i = len - 1; i > 0; i--) {
//        swap(&arr[0], &arr[i]);
//        max_heapify(arr, 0, i - 1);
//    }
//}
//
//int main() {
//    int arr[] = { 3, 5, 3, 0, 8, 6, 1, 5, 8, 6, 2, 4, 9, 4, 7, 0, 1, 8, 9, 7, 3, 1, 2, 5, 9, 7, 4, 0, 2, 6 };
//    int len = (int) sizeof(arr) / sizeof(*arr);
//	printf("sizeof(arr) / sizeof(*arr)=%d\n", sizeof(arr) / sizeof(*arr));
//    heap_sort(arr, len);
//    int i;
//    for (i = 0; i < len; i++)
//        printf("%d ", arr[i]);
//    printf("\n");
//    return 0;
//}





///*快速排序(Quick Sort)使用分治法策略。
//它的基本思想是：选择一个基准数，通过一趟排序将要排序的数据分割成独立的两部分；
//其中一部分的所有数据都比另外一部分的所有数据都要小。
//然后，再按此方法对这两部分数据分别进行快速排序，整个排序过程可以递归进行，
//以此达到整个数据变成有序序列。
//
//快速排序流程：
//(1) 从数列中挑出一个基准值。
//(2) 将所有比基准值小的摆放在基准前面，所有比基准值大的摆在基准的后面(相同的数可以到任一边)；
//	在这个分区退出之后，该基准就处于数列的中间位置。
//(3) 递归地把"基准值前面的子数列"和"基准值后面的子数列"进行排序。
//*/
//#include <stdio.h>
//
////void quickSort(int *arr, int l, int r)
////{
////	int i = l, j = r, temp = arr[i];
////
////	if(i < j)
////	{
////		while (i < j) {
////			while (temp < arr[j] && i < j)
////				j--;
////			if(i < j)
////				arr[i++] = arr[j];
////			while (temp > arr[i] && i < j)
////				i++;
////			if(i < j)
////				arr[j--] = arr[i];
////		}
////
////		arr[i] = temp;
////		quickSort(arr, l, i - 1);
////		quickSort(arr, i + 1, r);
////	}
////}
//void quickSort(int *arr, int l, int r)
//{
//	if(l < r) {
//		int i = l, j = r, temp;
//
//		temp = arr[i];                           //基准值
//		while (i < j) {
//			while (arr[j] > temp && i < j) { //从右往左找小于基准值的下标；降序找大于基准值
//				j--;
//			}
//			if(i < j) {
//				arr[i++] = arr[j];
//			}
//			while (arr[i] < temp && i < j) { //从左往右找大于基准值的下标；降序找小于基准值
//				i++;
//			}
//			if(i < j) {
//				arr[j--] = arr[i];
//			}
//		}
//		arr[i] = temp;
//		quickSort(arr, l, i - 1);
//		quickSort(arr, i + 1, r);
//	}
//}
//
//void test(int arr[], int sz)
//{
//	for (int i = 0; i < sz; ++i)
//		printf("%d ", arr[i]);
//	printf("\n");
//}
//int main()
//{
//	int arr[] = { 2, 5, 6, 1, 8, 0, 4, 6, 8, 7, 9, 6};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("未排序的数组:>  ");
//	test(arr,sz);                    //输出数组中的元素
//	quickSort(arr, 0, sz - 1);       //快速排序 = 快排
//	printf("已经排好序的数组:>  ");
//	test(arr, sz);
//
//	return 0;
//}






///*插入排序思路：
//1. 从第一个元素开始，该元素可以认为已经被排序
//2. 取出下一个元素，在已经排序的元素序列中从后向前扫描
//3. 如果该元素（已排序）大于新元素，将该元素移到下一位置
//4. 重复步骤3，直到找到已排序的元素小于或者等于新元素的位置
//5. 将新元素插入到该位置后
//6. 重复步骤2~5
//*/
//#include <stdio.h>
//
//void insertSort(int *num, int len)
//{
//	int i, j, temp;
//	for (i = 0; i < len - 1; i++) {
//		j = i + 1;
//		temp = num[j]; //temp存储新元素
//		while(temp < num[--j] && j >= 0) {//升序排序，降序排序需要num[j] < temp
//			num[j + 1] = num[j];
//		}
//		num[j + 1] = temp;
//	}
//}
//
////void insertSort(int *num, int len)
////{
////	int i, j, temp;
////	for (i = 1; i < len; i++) {
////		j = i - 1;
////		temp = num[i];
////		while(num[j] > temp && j >= 0) {//升序排序，降序排序需要num[j] < temp
////			num[j + 1] = num[j];
////			j--;
////		}
////		num[++j] = temp;
////	}
////}
//
//void test(int arr[], int sz)
//{
//	for (int i = 0; i < sz; ++i)
//		printf("%d ", arr[i]);
//	printf("\n");
//}
//int main()
//{
//	int arr[] = { 2, 5, 6, 1, 8, 0, 4, 6, 8, 7, 9, 6};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("未排序的数组:>  ");
//	test(arr,sz);//输出数组中的元素
//	insertSort(arr, sz);//选择排序
//	printf("已经排好序的数组:>  ");
//	test(arr, sz);
//
//	return 0;
//}




//#include <stdio.h>
//#include <stdlib.h>
//
//void selectionSort(int *num, int len)  //选择排序升序排列
//{
//	int i, j, temp, minIndex;
//
//	for (i = 0; i < len - 1; i++) {
//		minIndex = i;
//		for (j = i + 1; j < len; j++) {
//			if (num[j] < num[minIndex]) {  //降序>
//				minIndex = j;
//			}
//		}
//		if (num[minIndex] < num[i]) {      //降序>
//			temp = num[minIndex];
//			num[minIndex] = num[i];
//			num[i] = temp;
//		}
//	}
//}
//void test(int arr[], int sz)
//{
//	for (int i = 0; i < sz; ++i)
//		printf("%d ", arr[i]);
//	printf("\n");
//}
//int main()
//{
//	int arr[] = { 2, 5, 6, 1, 8, 0, 4, 6, 8, 7, 9, 6};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("未排序的数组:>  ");
//	test(arr,sz);//输出数组中的元素
//	selectionSort(arr, sz);//选择排序
//	printf("已经排好序的数组:>  ");
//	test(arr, sz);
//	system("pause");
//	return 0;
//}



//#include <stdio.h>
// /************************************************************************
// *冒泡排序是排序算法中较为简单的一种，英文名称为bubble sort。
// *方法一：从前面开始遍历所有数据，每次对相邻的元素进行两两对比。升序排序：每次遍历把大元素
// *        往后排；降序排序：每次遍历把小元素往后排。
// *方法二：从后面开始遍历所有数据，每次对相邻的元素进行两两对比。升序排序：每次遍历把小元素
// *        往前排；降序排序：每次遍历把大元素往前排。
// *平均时间复杂度：O(n2)
// *空间复杂度：O(1)
// *当数据量大时，冒泡算法的效率并不高。
// **************************************************************************/
//
//void swap(int *t1, int *t2)
//{
//	int temp;
//	temp = *t1;
//	*t1 = *t2;
//	*t2 = temp;
//}
///*从前面开始对比排序*/
//void bubble_sort_asc(int arr[], int len)
//{
//	int i, j;
// 
//	for (i = 0; i < len -1; i++) {              //大数往后沉 len - 1 次数组就已经排序好了
//		for (j = 0; j < len -1 -i; j++) {
//			if (arr[j] > arr[j + 1]) {  //将大的往后排
//				swap(&arr[j], &arr[j + 1]);
//			}
//		}
//	}
//}
//
//void bubble_sort_des(int arr[], int len)
//{
//	int i, j;
// 
//	for (i = 0; i < len -1; i++) {
//		for (j = 0; j < len -1 -i; j++) {
//			if (arr[j] < arr[j + 1]) {   //将小的往后排
//				swap(&arr[j], &arr[j + 1]);
//			}
//		}
//	}
//}
///*从后面开始对比排序*/
////void bubble_sort_asc(int arr[], int len)
////{
////	int i, j;
//// 
////	for (i = 0; i < len - 1; i++) {
////		for (j = len - 1; j > i ; j--) {
////			if (arr[j - 1] > arr[j]) {    //将小的往前排
////				swap(&arr[j - 1], &arr[j]);
////			}
////		}
////	}
////}
////void bubble_sort_des(int arr[], int len)
////{
////	int i, j;
//// 
////	for (i = 0; i < len - 1; i++) {
////		for (j = len - 1; j > i ; j--) {
////			if (arr[j - 1] < arr[j]) {    //将小的往前排
////				swap(&arr[j - 1], &arr[j]);
////			}
////		}
////	}
////}
//
//int main()
//{
//	int arr1[] = {34, 27, 55, 8, 97, 67, 35, 43, 22, 101, 78, 96, 35, 99};
//	int i;
//	int len = sizeof(arr1) / sizeof(*arr1);
//    
//	bubble_sort_asc(arr1, len);
//	printf("len = %d \n", len);
//	printf("use bubble sort asc the arrary is: ");
//    
//	for(i = 0; i < len; i++){
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	bubble_sort_des(arr1, len);
//	printf("use bubble sort des the arrary is: ");
//    
//	for(i = 0; i < len; i++){
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	return 0;
//}



//#include <stdio.h>
//
//int main(void)
//{
//	int num[10] = {1,2,3,4,5};
//	printf("sizeof(num)/sizeof(int)=%lu\n", sizeof(num)/sizeof(int));
//	int i = 0;
//	for (; i < 10; i++) {
//		printf("num[%d]=%d\n", i, num[i]);
//	}   
//	for (i = 0; i < 10; i++) {
//		if (num[i] == 0)
//			break;
//	}   
//	printf("数组元素个数为：%d\n", i);    
//
//	return 0;
//}

//void Divarray(int *pArray, int size)
//{
//	for (int i = 0; i < size; i++) {
//		pArray[i] /= pArray[0];
//	}
//}
//
//int main()
//{
//	int num[5] = {2,2,3,4,5};
//
//	Divarray(num, 5);
//
//	for (int i = 0; i < 5; i++) {
//		printf("%d\n", num[i]);
//	}
//
//	return 0;
//}