//��������ö��
#include<iostream>

using namespace std;
 
/*
	���������ֶ���ö�ٵķ�ʽ�д��󣬴�����ʾΪö����sum�ض��塣
	��C++11֮ǰ���ǲ��������ж�������ö����������ͬ��ö������
	�����ᵼ��ö�����ض���Ĵ���
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
C++11�ṩ�˶�������ö�ٵ�ʹ�÷��������ǿ��������ж�������ö������ӵ����ͬ���Ƶ�ö������
ǰ������class�ؼ�������ö�ٱ������ơ�
����ö�ٱ�����������Ϊ���ڡ�
*/
class Test3
{
public:
	enum class grade{sum = 10};
	enum class age{sum = 20};
};
 
/*
������C++11֮ǰ��ö�ٱ��������µ���������ö�٣�
���Ƕ�������ʾ�ĸ�ö�������ṩ���ͣ�ǰ�������Ρ�
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
���⣬����ö�ٿ��Ժ����α����Զ�ת��������������
��������ö��������ʽ��ת��Ϊ���Σ�
*/
class Test6
{
public:
	enum{sum = 10};
	void show()
	{
		int number = sum;
		cout << number << endl; ////����ö�ٿ����Զ�ת��Ϊ����
	}
};
 
class Test7
{
public:
	enum class grade{sum = 10};
	void show()
	{
		//int number = sum;  //��ʱ������ʽ��ת��Ϊ���Σ����ǿ��Խ�����ʾ��ת��
		int number = (int)grade::sum;
		cout << number << endl;
	}
};
 
int main()
{
 
 
 
	cin.get();
	return 0;
}