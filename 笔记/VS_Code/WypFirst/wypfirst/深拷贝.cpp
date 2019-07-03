//#include <iostream>
//using namespace std;
//
//class CStu
//{
//public:
//	int *a;
//	CStu()
//	{
//		a = new int[2];
//		a[0] = 12;
//		a[1] = 13;
//	}
//	//解决拷贝构造所引发的，指针成员二次释放崩溃的问题的方法：深拷贝、传地址、传引用。
//	CStu(const CStu& b)
//	{
//		//this->a = b.a;//这样还是浅拷贝（也会报错）
//		//申请空间
//		this->a = new int[2]; //深拷贝，也申请了空间，把内容拷贝过来
//		this->a[0] = b.a[0];
//		this->a[1] = b.a[1];
//		/*memcpy(this->a, b.a, 8);*///内存拷贝，也是能实现复制内容
//	}
//	~CStu()
//	{
//		delete[] a;
//	}
//
//};
//
//int main()
//{
//	CStu st;
//	cout << st.a[0] << " " << st.a[1] << endl;
//
//	CStu at = st; //
//	//浅拷贝在调用析构函数时会重复释放指针指向的空间（会报错）
//	cout << at.a[0] << " " << at.a[1] << endl;
//
//	system("pause");
//	return 0;
//}