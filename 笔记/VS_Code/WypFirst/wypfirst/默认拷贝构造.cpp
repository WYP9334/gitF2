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
//	//ǳ����
//	//Ĭ�ϵĸ��ƹ��캯����������ƷǾ�̬��Ա����Ա�ĸ��Ƴ�Ϊǳ���ƣ�ֵ�����Ƶ��ǳ�Ա��ֵ��
//	CStu st1 = st;//���û��д�������캯������ִ��Ĭ�ϵĿ������캯����
//				//�������д�˿������캯�����ͻ�ִ�п������캯����
//	cout << st1.b << " " << st1.c << endl;
//
//	system("pause");
//	return 0;
//}