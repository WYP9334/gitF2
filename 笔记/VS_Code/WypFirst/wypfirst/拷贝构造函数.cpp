//#include <iostream>
//using namespace std;
//
//class CStu
//{
//public:
//	CStu()
//	{
//
//	}
//	CStu(const CStu& a)
//	{
//
//	}
//};
//
//int main()
//{
//	CStu st1;
//	//默认的复制构造函数，逐个复制非静态成员（成员的复制成为浅复制）值，复制的是成员的值。
//	//CStu stNew(st1); //调用拷贝构造函数的第一种情况
//	//CStu stNew = st1; //调用拷贝构造函数的第二种情况
//	//CStu stNew = CStu(st1); //临时对象，调用拷贝构造函数的第二种情况
//	//CStu* stNew = new CStu(st1);
//
//	CStu st2;//已经调用了构造函数，所以不会调用拷贝构造函数
//	st2 = st1;
//
//	system("pause");
//	return 0;
//}