//#include <stdio.h>
//
//int main(void)
//{
//	unsigned int a, b;
//	int n = 1;
//	while (n--) {
//		scanf("%d %d", &a, &b);
//		if ((a + b) < 1 || a > 200000 || b > 200000) {
//			printf("���벻����Ҫ�����������룺\n");
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
////void BubbleSort(int Arr[], int length) //ð������
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
//// *����������������ת��Ϊ��������
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
////		/*�ַ���ת��Ϊ�ַ�����*/
////		strcpy(nu, (*it++).c_str());
////		/*�ַ�����ȥ���ո�*/
////		for (int i = 0; i < strlen(nu); i++) {
////			nu[i] = nu[2*i];
////		}
////		/*�ַ�����ת������������*/
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
////	/*�������Ĳ���*/
////
////	//for (int i = 0; i < row * column; i++) {
////	//	cout << numLast[i];                    //�������
////	//	if ((i + 1) % column == 0)
////	//		cout << endl;
////	//	else
////	//		cout << "-";
////	//}
////	return 0;
////}