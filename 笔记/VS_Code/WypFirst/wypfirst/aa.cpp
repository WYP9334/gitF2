//#include <stdio.h>
//
//int main(void)
//{
//	unsigned int a, b;
//	int n = 1;
//	while (n--) {
//		scanf("%d %d", &a, &b);
//		if ((a + b) < 1 || a > 200000 || b > 200000) {
//			printf("输入不符合要求，请重新输入：\n");
//			n = 1;
//		}
//	}
//
//	return 0;
//}
//
//
//
//
//
//
//
//
//
////void BubbleSort(int Arr[], int length) //冒泡排序
////{
////	for(int m = 0; m < length; m++)
////	{ 
////		for(int n = 0; n < length - m - 1; n++)
////		{
////			if(Arr[n] > Arr[n+1])
////			{ 
////				int temp = Arr[n];
////				Arr[n] = Arr[n+1];
////				Arr[n+1] = temp;
////			} 
////		}
////	}
////}
//
////#include <stdio.h>
////
////int main(void)
////{
////	static int len = 0;
////	int num[100];
////	for (int i = 0; i < 100; i++) {
////		scanf("%d", &num[i]);
////		if (getchar() == '\n' && getchar() == '\n') {
////			num[i + 1] = 3;
////			break;
////		}
////	}
////	for (int i = 0; i < 100; i++) {
////		/*if (num[i] == 3) {
////			len = i;
////			break;
////		}*/
////		printf("%d\n", num[i]);
////	}
////	
////	printf("%d\n", len);
////	return 0;
////}
//
////#include <iostream>
////#include <string>
////#include <vector>
////using namespace std;
////
////int main(void)
////{
////	/*string _num;
////	vector<string> strNum;
////	while (getline(cin, _num)) {
////		strNum.push_back(_num);
////	}
////	for (vector<string>::iterator it= strNum.begin(); it != strNum.end(); it++) {
////		cout << *it << endl;
////	}*/
////	return 0;
////}
//
/////*
//// *将矩阵形输入数据转存为整型数组
////*/
////#include <iostream>
////#include <string>
////#include <vector>
////using namespace std;
////
////vector<int> sToi(vector<string> &strNum, int row)
////{
////	char nu[21];
////	vector<int> num;
////	vector<string>::iterator it= strNum.begin();
////	for (int i = 0; i < row; i++) {
////		/*字符串转换为字符数组*/
////		strcpy(nu, (*it++).c_str());
////		/*字符数组去除空格*/
////		for (int i = 0; i < strlen(nu); i++) {
////			nu[i] = nu[2*i];
////		}
////		/*字符数组转换成整形数组*/
////		for (int i = 0; i < strlen(nu)/2 + 1; i++) {
////			num.push_back(nu[i] - '0');
////		}
////	}
////	return num;
////}
////
////int main(void)
////{
////	int row, column;
////	string _num;
////	string ch;
////	vector<string> strNum;
////	while (getline(cin, _num)) {
////		_num = ch + _num;
////		strNum.push_back(_num);
////		if ((ch = cin.get()) == "\n")
////			break;
////	}
////	row = strNum.size();
////	vector<int> numLast = sToi(strNum, row);
////	column = numLast.size() / row;
////
////	/*对整数的操作*/
////
////	//for (int i = 0; i < row * column; i++) {
////	//	cout << numLast[i];                    //整数输出
////	//	if ((i + 1) % column == 0)
////	//		cout << endl;
////	//	else
////	//		cout << "-";
////	//}
////	return 0;
////}