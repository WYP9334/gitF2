//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
///*将矩阵形输入数据转存为整型数组*/
//vector<int> sToi(vector<string> &strNum, int row)
//{
//	char nu[21];
//	vector<int> num;
//	vector<string>::iterator it= strNum.begin();
//	for (int i = 0; i < row; i++) {
//		/*字符串转换为字符数组*/
//		strcpy(nu, (*it++).c_str());
//		/*字符数组去除空格*/
//		for (int i = 0; i < strlen(nu); i++) {
//			nu[i] = nu[2*i];
//		}
//		/*字符数组转换成整形数组*/
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
//	/*对整数的操作*/
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