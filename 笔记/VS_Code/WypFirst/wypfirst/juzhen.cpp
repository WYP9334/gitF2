//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
///*����������������ת��Ϊ��������*/
//vector<int> sToi(vector<string> &strNum, int row)
//{
//	char nu[21];
//	vector<int> num;
//	vector<string>::iterator it= strNum.begin();
//	for (int i = 0; i < row; i++) {
//		/*�ַ���ת��Ϊ�ַ�����*/
//		strcpy(nu, (*it++).c_str());
//		/*�ַ�����ȥ���ո�*/
//		for (int i = 0; i < strlen(nu); i++) {
//			nu[i] = nu[2*i];
//		}
//		/*�ַ�����ת������������*/
//		for (int i = 0; i < strlen(nu)/2 + 1; i++) {
//			num.push_back(nu[i] - '0');
//		}
//	}
//	return num;
//}
//
//int main(void)
//{
//	unsigned int n, m;
//	cin >> n >> m;
//	cin.get();
//	int count = 0;
//	int row, column;
//	string _num;
//	string ch;
//	vector<string> strNum;
//	while (getline(cin, _num)) {
//		_num = ch + _num;
//		strNum.push_back(_num);
//		if ((ch = cin.get()) == "\n")
//			break;
//	}
//	row = strNum.size();
//	vector<int> numLast = sToi(strNum, row);
//	column = numLast.size() / row;
//
//	/*�������Ĳ���*/
//	if (n*m/2 == 1) {
//		for (int i = 0; i < n*m/2 + 1; i++) {
//			if (numLast[i] == numLast[i + 1])
//				count++;
//			if (numLast[i] == numLast[i + m])
//				count++;
//			i++;
//		}
//	}
//	else {
//		for (int i = 0; i < n*m/2; i++) {
//			if (numLast[i] == numLast[i + 1])
//				count++;
//			if (numLast[i] == numLast[i + m])
//				count++;
//			i++;
//		}
//	}
//	cout << count << endl;
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void)
//{
//	unsigned int n, m;
//	scanf("%u %u", &n, &m);
//
//	unsigned int *BWMut = (unsigned int *)malloc(sizeof(unsigned int) * m);
//	for (int i = 0; i < m; i++) {
//		scanf("%u", &BWMut[i]);
//	}
//
//
//	for (int i = 0; i < n*m; i++) {
//		printf("%u", BWMut[i]);
//	}
//
//	return 0;
//}