//作用域内枚举
#include<iostream>

using namespace std;
 
/*
	下面这两种定义枚举的方式有错误，错误提示为枚举数sum重定义。
	在C++11之前我们不能在类中定义两个枚举类型有相同的枚举数。
	这样会导致枚举数重定义的错误。
*/
//class Test1
//{
//public:
//	enum {sum = 10};
//	enum {sum = 20};
//};
//class Test2
//{
//public:
//	enum grade{sum = 10};
//	enum age{sum = 20};
//};
 
 
/*
C++11提供了定义域内枚举的使用方法，我们可以在类中定义两个枚举类型拥有相同名称的枚举数，
前提是用class关键字修饰枚举变量名称。
并且枚举变量的作用域为类内。
*/
class Test3
{
public:
	enum class grade{sum = 10};
	enum class age{sum = 20};
};
 
/*
无论是C++11之前的枚举变量还是新的作用域内枚举，
我们都可以显示的给枚举类型提供类型，前提是整形。
*/
class Test4
{
public:
	enum :long{sum = 123};
};
 
class Test5
{
public:
	enum class grade:long { sum = 123 };
};
 
/*
另外，常规枚举可以和整形变量自动转换，存在隐患，
作用域内枚举则不能隐式的转换为整形；
*/
class Test6
{
public:
	enum{sum = 10};
	void show()
	{
		int number = sum;
		cout << number << endl; ////常规枚举可以自动转换为整形
	}
};
 
class Test7
{
public:
	enum class grade{sum = 10};
	void show()
	{
		//int number = sum;  //此时不能隐式的转换为整形，但是可以进行显示的转换
		int number = (int)grade::sum;
		cout << number << endl;
	}
};
 
int main()
{
 
 
 
	cin.get();
	return 0;
}