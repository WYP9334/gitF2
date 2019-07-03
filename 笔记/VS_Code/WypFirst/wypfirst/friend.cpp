//#include <iostream>
//using namespace std;
//
//class CFather
//{
//private:
//	int father_num;
//public:
//	void fun()
//	{
//		cout << "fun_father\n";
//	}
//	CFather()
//	{
//		father_num = 100;
//		cout << "CFather\n"; 
//	}
//	~CFather()
//	{
//		cout << "~CFather\n"; 
//	}
//	friend void show();
//};
//
//void show()
//{
//	CFather fa;
//	cout << "Father_Friend\n";
//	cout << fa.father_num << endl;
//}
//
//class CSon : public CFather
//{
//public:
//	void fun()
//	{
//		cout << "fun_son\n";
//	}
//	CSon()
//	{
//		cout << "CSon\n";
//	}
//	~CSon()
//	{
//		cout << "~CSon\n";
//	}
//};
//
//
//
//int main()
//{
//	CSon person;
//	//person.CFather::fun();
//	//person.fun();//子类会覆盖父类的同名变量和函数
//	show();
//
//	//system("pause");
//	return 0;
//}