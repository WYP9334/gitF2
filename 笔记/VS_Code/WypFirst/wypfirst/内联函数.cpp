//普通函数编译时会跳转到函数调用代码段去编译；
		//来回跳跃+记录跳跃的位置==一定的系统开销（资源+时间）
//内联函数是将代码段加载到函数调用区域填充函数调用
		//比常规函数稍快、代价是占用更多内存

//程序员请求将函数作为内联函数时，编译器不一定会答应：
//1、函数体过大
//2、递归不能是内联函数

//
#include <iostream>

#define SUM(x) x*x
using namespace std;

inline void fun(int i)
{
	cout << (i*i) << endl;
}

int main()
{
	cout << (SUM(2+3)) << endl; //宏是单纯的替换
	fun(2+3);
	
	system("pause");
	return 0;
}