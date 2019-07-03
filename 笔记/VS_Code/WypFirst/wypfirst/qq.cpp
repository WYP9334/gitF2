//#include<list>
//#include<vector>
//#include<string>
//#include<iostream>
//using namespace std;
// 
//list<int> GetStringByNumArr(string str);
// 
//int main()
//{
//	while (true)
//	{
//		cout << "请输入字符串" << endl;
//		string str;
//		cin >> str;
//		list<int> nums = GetStringByNumArr(str);
// 
//		for (list<int>::iterator it = nums.begin(); it != nums.end(); it++)
//		{
//			cout << *it << endl;
//		}
//	}
// 
//	system("pause");
//	return 0;
//}
// 
//char numarr[] = {
//	'0',
//	'1',
//	'2',
//	'3',
//	'4',
//	'5',
//	'6',
//	'7',
//	'8',
//	'9',
//};
// 
//list<int> GetStringByNumArr(string str) {
// 
//	list<int> numlist;
//	int startIndex = 0;
// 
//	while (startIndex != -1)
//	{
//		vector<char> tempnum;
// 
//		startIndex = -1;
// 
//		for (size_t i = 0; i < str.length(); i++)
//		{
//			for (size_t j = 0; j < (sizeof(numarr) / sizeof(numarr[0]) - 1); j++)
//			{
//				if (str[i] == numarr[j])
//				{
//					startIndex = i;
//					break;
//				}
//			}
// 
//			if (startIndex != -1)
//			{
//				tempnum.push_back(str[startIndex]);
//				int tempindex = 0;
// 
//				//向下查找数据
//				char tempchar = str[startIndex + (tempindex += 1)];
// 
//				//表示为数字
//				while (int(tempchar - 48) >= 0 && int(tempchar - 48) <= 9)
//				{
//					tempnum.push_back(tempchar);
//					tempchar = str[startIndex + (tempindex += 1)];
//				}
// 
//				//删除查询到的数据
//				str.erase(startIndex, tempindex);
//				break;
//			}
//		}
//		
//		if (!tempnum.empty()) {
//			//cout << "tempnum : " << string(tempnum.begin(), tempnum.end()) << endl;
//			numlist.push_back(stoi(string(tempnum.begin(), tempnum.end())));
//		}
//	}
// 
//	return numlist;
//}
