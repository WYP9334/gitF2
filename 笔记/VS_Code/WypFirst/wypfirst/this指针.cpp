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
//		this->a = a; //this��ָ��ǰ�����ָ��CStu *,���Կ���ͨ��thisָ����ʳ�Ա
//		this->Show(); //thisָ�벻�ǳ�Ա
//		//this�������������ڲ�����ĳ�Ա�����������ã���ϵͳĬ�ϴ��ݸ��������Ǿ�̬����������������
//		cout << "���캯��\n";
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
//	CStu st(12);//thisָ��ʹ����Ķ����໥�󶨵�
//	st.Show();
//	cout << st.GetAddr() << endl;
//	cout << (st.GetAddr())->a << endl;
//
//	CStu st1(13);
//
//	system("pause");
//	return 0;
//}