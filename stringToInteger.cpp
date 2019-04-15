/*
 *将矩阵形输入数据转存为整型数组
*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> sToi(vector<string> &strNum, int row)
{
	char nu[21];
	vector<int> num;
	vector<string>::iterator it= strNum.begin();
	for (int i = 0; i < row; i++) {
		/*字符串转换为字符数组*/
		strcpy(nu, (*it++).c_str());
		/*字符数组去除空格*/
		for (int i = 0; i < strlen(nu); i++) {
			nu[i] = nu[2*i];
		}
		/*字符数组转换成整形数组*/
		for (int i = 0; i < strlen(nu)/2 + 1; i++) {
			num.push_back(nu[i] - '0');
		}
	}
	return num;
}

int main(void)
{
	int row, column;
	string _num;
	string ch;
	vector<string> strNum;
	while (getline(cin, _num)) {
		_num = ch + _num;
		strNum.push_back(_num);
		if ((ch = cin.get()) == "\n")
			break;
	}
	row = strNum.size();
	vector<int> numLast = sToi(strNum, row);
	column = numLast.size() / row;

	/*对整数的操作*/

	//for (int i = 0; i < row * column; i++) {
	//	cout << numLast[i];                    //整数输出
	//	if ((i + 1) % column == 0)
	//		cout << endl;
	//	else
	//		cout << "-";
	//}
	return 0;
}