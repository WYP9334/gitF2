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
//	//������������������ģ�ָ���Ա�����ͷű���������ķ��������������ַ�������á�
//	CStu(const CStu& b)
//	{
//		//this->a = b.a;//��������ǳ������Ҳ�ᱨ��
//		//����ռ�
//		this->a = new int[2]; //�����Ҳ�����˿ռ䣬�����ݿ�������
//		this->a[0] = b.a[0];
//		this->a[1] = b.a[1];
//		/*memcpy(this->a, b.a, 8);*///�ڴ濽����Ҳ����ʵ�ָ�������
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
//	//ǳ�����ڵ�����������ʱ���ظ��ͷ�ָ��ָ��Ŀռ䣨�ᱨ��
//	cout << at.a[0] << " " << at.a[1] << endl;
//
//	system("pause");
//	return 0;
//}