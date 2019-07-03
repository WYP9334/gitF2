//#include <iostream>
//
//using namespace std;
//
////对象空间的最开始四字节内容，是虚表（虚函数列表）的地址，叫虚指针。
//
//class CFather
//{
//public:
//	//只要有纯虚函数就称作抽象类
//	//如果都是纯虚函数，那就称作“接口类”
//	virtual void vir_fun() = 0; //纯虚函数；特点：可以没有函数实现；继承这个基类的子类必须去实现它，才能定义对象。
//
//	////virtual CFather& Show() //如果是协变，需要父类和子类分别使用类的引用
//	//virtual void Show() //虚函数不能是内联函数，写了不会出错，编译的时候会自动去掉
//	//	//构造函数不能是虚函数
//	//{
//	//	cout << "class CFather\n";
//	//}
//	//virtual ~CFather() //虚析构函数
//	//{
//	//	cout << "~CFather\n";
//	//}
//};
//
//class CSon : public CFather
//{
//public:
//	void vir_fun()
//	{
//		cout << "virtual_fun\n";
//	}
////	//virtual CSon& Show() //如果是协变，需要父类和子类分别使用类的引用
////	int aa; //“虚”只针对于函数成员
////	void Show() //子类的Show()去重写了父类的Show(),重写是针对于虚函数的，覆盖是针对于普通函数的。
////		//前面省略了virtual,如何验证呢，构造一个它的子类
////	{
////		cout << "class CSon show\n";
////	}
////	~CSon()
////	{
////		cout << "~CSon\n";
////	}
//};
//
////class CXiaoMing
////{
////public:
////	~CXiaoMing()
////	{
////		cout << "~CXiaoMIng\n";
////	}
////};
//
////class CSonSon : public CSon
////{
////public:
////	int aa_son; //“虚”只针对于函数成员
////	void Show() //子类的Show()去重写了父类的Show(),重写是针对于虚函数的，覆盖是针对于普通函数的。
////		//前面省略了virtual,如何验证呢，构造一个它的子类
////		//建议手动添加，如果不添加系统也会帮我们添加
////	{
////		cout << "class CSonSon\n";
////	}
////};
//
//int main()
//{
//	////CFather vir;//有纯虚函数的类就是不能创建对象的。
//	CSon vir;
//
//	//CFather* fa = new CSon; //只有指向了子类空间，子类空间的同名函数才是虚函数
//	//fa->Show(); 
//	
//	/*typedef void (*p)();*/
//
//	//((p)(*((int*)*(int*)fa + 0)))(); //*(int*)fa虚表的首地址，fa是类对象空间的首地址，*((int*)*(int*)fa)是虚表中存储函数的首地址。
//	//int* pp = (int*)(*((int*)*(int*)fa + 1));  //虚表的尾巴
//
//	//cout << pp << endl;
//
//	/*CSon* so = new CSonSon;
//	so->Show();*/
//
//	//delete (CXiaoMing*)fa; //delete的指针的类型是谁，就调用谁的析构函数；类对象申请的空间会被释放，但是对象成员申请的空间不会被释放。
//	/*delete so;*/
//	system("pause");
//	return 0;
//}