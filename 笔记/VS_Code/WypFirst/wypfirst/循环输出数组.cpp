//#include <stdio.h>
//#include <stdlib.h>
////void insertSort(int *num, int len)
////{
////	int i, j, temp;
////	for (i = 0; i < len - 1; i++) {
////		j = i + 1;
////		temp = num[j]; //temp�洢��Ԫ��
////		while(temp < num[--j] && j >= 0) {//�������򣬽���������Ҫnum[j] < temp
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
//	printf("δ���������:>  ");
//	test(arr,sz);//��������е�Ԫ��
//	insertSort(arr, sz);//ѡ������
//	printf("�Ѿ��ź��������:>  ");
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
//	printf("δ���������:>  ");
//	test(arr,sz);//��������е�Ԫ��
//	selectSort(arr, sz);//ѡ������
//	printf("�Ѿ��ź��������:>  ");
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
//	printf("δ���������:>  ");
//	test(arr,sz);                    //��������е�Ԫ��
//	quickSort(arr, 0, sz - 1);       //�������� = ����
//	printf("�Ѿ��ź��������:>  ");
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
//	printf("δ���������:>  ");
//	test(arr,sz);                    //��������е�Ԫ��
//	quickSort(arr, 0, sz - 1);       //�������� = ����
//	printf("�Ѿ��ź��������:>  ");
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
////void selectionSort(int *num, int len)  //ѡ��������������
////{
////	int i, j, temp, minIndex;
////
////	for (i = 0; i < len - 1; i++) {
////		minIndex = i;
////		for (j = i + 1; j < len; j++) {
////			if (num[j] < num[minIndex]) {  //����>
////				minIndex = j;
////			}
////		}
////		if (num[minIndex] < num[i]) {      //����>
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
//	printf("δ���������:>  ");
//	test(arr,sz);//��������е�Ԫ��
//	selectSort(arr, sz);//ѡ������
//	printf("�Ѿ��ź��������:>  ");
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
//	printf("δ���������:>  ");
//	test(arr,sz);                    //��������е�Ԫ��
//	quickSort(arr, 0, sz - 1);       //�������� = ����
//	printf("�Ѿ��ź��������:>  ");
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
//    // �������ڵ�ָ����ӽڵ�ָ��
//    int dad = start;
//    int son = dad * 2 + 1;
//    while (son <= end) { // ���ӽڵ�ָ���ڷ�Χ�ڲ����Ƚ�
//        if (son + 1 <= end && arr[son] < arr[son + 1]) // �ȱȽ������ӽڵ��С��ѡ������
//            son++;
//        if (arr[dad] > arr[son]) // ������ڵ�����ӽڵ���������ϣ�ֱ����������
//            return;
//        else { // ���򽻻����������ټ����ӽڵ����ڵ�Ƚ�
//            swap(&arr[dad], &arr[son]);
//            dad = son;
//            son = dad * 2 + 1;
//        }
//    }
//}
//
//void heap_sort(int arr[], int len) {
//    int i;
//    // ��ʼ����i�����һ�����ڵ㿪ʼ����
//    for (i = len / 2 - 1; i >= 0; i--)
//        max_heapify(arr, i, len - 1);
//    // �Ƚ���һ��Ԫ�غ����ź�Ԫ��ǰһλ�������������µ�����ֱ���������
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





///*��������(Quick Sort)ʹ�÷��η����ԡ�
//���Ļ���˼���ǣ�ѡ��һ����׼����ͨ��һ������Ҫ��������ݷָ�ɶ����������֣�
//����һ���ֵ��������ݶ�������һ���ֵ��������ݶ�ҪС��
//Ȼ���ٰ��˷����������������ݷֱ���п�����������������̿��Եݹ���У�
//�Դ˴ﵽ�������ݱ���������С�
//
//�����������̣�
//(1) ������������һ����׼ֵ��
//(2) �����бȻ�׼ֵС�İڷ��ڻ�׼ǰ�棬���бȻ�׼ֵ��İ��ڻ�׼�ĺ���(��ͬ�������Ե���һ��)��
//	����������˳�֮�󣬸û�׼�ʹ������е��м�λ�á�
//(3) �ݹ�ذ�"��׼ֵǰ���������"��"��׼ֵ�����������"��������
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
//		temp = arr[i];                           //��׼ֵ
//		while (i < j) {
//			while (arr[j] > temp && i < j) { //����������С�ڻ�׼ֵ���±ꣻ�����Ҵ��ڻ�׼ֵ
//				j--;
//			}
//			if(i < j) {
//				arr[i++] = arr[j];
//			}
//			while (arr[i] < temp && i < j) { //���������Ҵ��ڻ�׼ֵ���±ꣻ������С�ڻ�׼ֵ
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
//	printf("δ���������:>  ");
//	test(arr,sz);                    //��������е�Ԫ��
//	quickSort(arr, 0, sz - 1);       //�������� = ����
//	printf("�Ѿ��ź��������:>  ");
//	test(arr, sz);
//
//	return 0;
//}






///*��������˼·��
//1. �ӵ�һ��Ԫ�ؿ�ʼ����Ԫ�ؿ�����Ϊ�Ѿ�������
//2. ȡ����һ��Ԫ�أ����Ѿ������Ԫ�������дӺ���ǰɨ��
//3. �����Ԫ�أ������򣩴�����Ԫ�أ�����Ԫ���Ƶ���һλ��
//4. �ظ�����3��ֱ���ҵ��������Ԫ��С�ڻ��ߵ�����Ԫ�ص�λ��
//5. ����Ԫ�ز��뵽��λ�ú�
//6. �ظ�����2~5
//*/
//#include <stdio.h>
//
//void insertSort(int *num, int len)
//{
//	int i, j, temp;
//	for (i = 0; i < len - 1; i++) {
//		j = i + 1;
//		temp = num[j]; //temp�洢��Ԫ��
//		while(temp < num[--j] && j >= 0) {//�������򣬽���������Ҫnum[j] < temp
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
////		while(num[j] > temp && j >= 0) {//�������򣬽���������Ҫnum[j] < temp
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
//	printf("δ���������:>  ");
//	test(arr,sz);//��������е�Ԫ��
//	insertSort(arr, sz);//ѡ������
//	printf("�Ѿ��ź��������:>  ");
//	test(arr, sz);
//
//	return 0;
//}




//#include <stdio.h>
//#include <stdlib.h>
//
//void selectionSort(int *num, int len)  //ѡ��������������
//{
//	int i, j, temp, minIndex;
//
//	for (i = 0; i < len - 1; i++) {
//		minIndex = i;
//		for (j = i + 1; j < len; j++) {
//			if (num[j] < num[minIndex]) {  //����>
//				minIndex = j;
//			}
//		}
//		if (num[minIndex] < num[i]) {      //����>
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
//	printf("δ���������:>  ");
//	test(arr,sz);//��������е�Ԫ��
//	selectionSort(arr, sz);//ѡ������
//	printf("�Ѿ��ź��������:>  ");
//	test(arr, sz);
//	system("pause");
//	return 0;
//}



//#include <stdio.h>
// /************************************************************************
// *ð�������������㷨�н�Ϊ�򵥵�һ�֣�Ӣ������Ϊbubble sort��
// *����һ����ǰ�濪ʼ�����������ݣ�ÿ�ζ����ڵ�Ԫ�ؽ��������Աȡ���������ÿ�α����Ѵ�Ԫ��
// *        �����ţ���������ÿ�α�����СԪ�������š�
// *���������Ӻ��濪ʼ�����������ݣ�ÿ�ζ����ڵ�Ԫ�ؽ��������Աȡ���������ÿ�α�����СԪ��
// *        ��ǰ�ţ���������ÿ�α����Ѵ�Ԫ����ǰ�š�
// *ƽ��ʱ�临�Ӷȣ�O(n2)
// *�ռ临�Ӷȣ�O(1)
// *����������ʱ��ð���㷨��Ч�ʲ����ߡ�
// **************************************************************************/
//
//void swap(int *t1, int *t2)
//{
//	int temp;
//	temp = *t1;
//	*t1 = *t2;
//	*t2 = temp;
//}
///*��ǰ�濪ʼ�Ա�����*/
//void bubble_sort_asc(int arr[], int len)
//{
//	int i, j;
// 
//	for (i = 0; i < len -1; i++) {              //��������� len - 1 ��������Ѿ��������
//		for (j = 0; j < len -1 -i; j++) {
//			if (arr[j] > arr[j + 1]) {  //�����������
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
//			if (arr[j] < arr[j + 1]) {   //��С��������
//				swap(&arr[j], &arr[j + 1]);
//			}
//		}
//	}
//}
///*�Ӻ��濪ʼ�Ա�����*/
////void bubble_sort_asc(int arr[], int len)
////{
////	int i, j;
//// 
////	for (i = 0; i < len - 1; i++) {
////		for (j = len - 1; j > i ; j--) {
////			if (arr[j - 1] > arr[j]) {    //��С����ǰ��
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
////			if (arr[j - 1] < arr[j]) {    //��С����ǰ��
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
//	printf("����Ԫ�ظ���Ϊ��%d\n", i);    
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