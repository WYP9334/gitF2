//#include <iostream>
//using namespace std;
//
//class CFather //父类叫虚基类
//{
//public:
//	////void Show() //普通的只能调用属于父类的成员，父类的指针调用不到子类的函数
//	virtual void Show() //虚函数使用，子类一定要有同名函数,如果没有，只能调用父类的函数 
//                         //解决多继承中访问不明确的问题
//						//不建议使用，结构复杂，内存开销比较大。
//	{
//		cout << "class CFather\n";
//	}
//};
//
//class CSon : public CFather
//{
//	int aa;
//	void Show()
//	{
//		cout << "class CSon";
//	}
//};
//
//class CSon1 : public CFather
//{
//	int aa;
//	void Show()
//	{
//		cout << "class CSon1";
//	}
//};
//
//int main()
//{
//	CFather* fa = new CSon1; 
//	//父类的指针指向不同的子类对象空间，只需要改变指向就能实现调用不同子类的函数，从而实现多态
//	//父类的指针指向子类的空间
//	//如何使用指针，由指针的类型决定
//	//int* a = new char; //这样就出错了
//	fa->Show(); //普通的只能调用属于父类的成员，父类的指针调用不到子类的函数
//
//	system("pause");
//	return 0;
//}