/*
 *����������������ת��Ϊ��������
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
		/*�ַ���ת��Ϊ�ַ�����*/
		strcpy(nu, (*it++).c_str());
		/*�ַ�����ȥ���ո�*/
		for (int i = 0; i < strlen(nu); i++) {
			nu[i] = nu[2*i];
		}
		/*�ַ�����ת������������*/
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

	/*�������Ĳ���*/

	//for (int i = 0; i < row * column; i++) {
	//	cout << numLast[i];                    //�������
	//	if ((i + 1) % column == 0)
	//		cout << endl;
	//	else
	//		cout << "-";
	//}
	return 0;
}