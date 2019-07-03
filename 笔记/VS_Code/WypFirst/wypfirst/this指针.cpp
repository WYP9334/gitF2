//#include <iostream>
//
//using namespace std;
//
//class CStu
//{
//public:
//	int a;
//	CStu(int a)
//	{
//		this->a = a; //this是指向当前对象的指针CStu *,所以可以通过this指针访问成员
//		this->Show(); //this指针不是成员
//		//this作用域是在类内部（类的成员函数内起作用），系统默认传递给函数（非静态函数）的隐含参数
//		cout << "构造函数\n";
//	}
//	void Show()
//	{
//		cout << a << endl;
//	}
//	CStu* GetAddr()
//	{
//		return this;
//	}
//};
//
//int main()
//{
//	CStu st(12);//this指针和创建的对象相互绑定的
//	st.Show();
//	cout << st.GetAddr() << endl;
//	cout << (st.GetAddr())->a << endl;
//
//	CStu st1(13);
//
//	system("pause");
//	return 0;
//}