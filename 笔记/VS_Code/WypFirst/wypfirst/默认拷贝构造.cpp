//#include <iostream>
//using namespace std;
//
//class CStu
//{
//public:
//	int b;
//	char c[4];
//	CStu()
//	{
//		b = 12;
//		strcpy_s(c, 4, "abc");
//	}
//
//	CStu(const CStu& a)
//	{
//		this->b = a.b;
//		strcpy_s(this->c, 4, a.c);
//	}
//};
//
//int main()
//{
//	CStu st;
//	cout << st.b << " " << st.c << endl;
//	//浅拷贝
//	//默认的复制构造函数，逐个复制非静态成员（成员的复制成为浅复制）值，复制的是成员的值。
//	CStu st1 = st;//如果没有写拷贝构造函数，就执行默认的拷贝构造函数；
//				//如果类中写了拷贝构造函数，就会执行拷贝构造函数。
//	cout << st1.b << " " << st1.c << endl;
//
//	system("pause");
//	return 0;
//}