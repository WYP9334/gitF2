//#include <iostream>
//using namespace std;
//
//class CFather //����������
//{
//public:
//	////void Show() //��ͨ��ֻ�ܵ������ڸ���ĳ�Ա�������ָ����ò�������ĺ���
//	virtual void Show() //�麯��ʹ�ã�����һ��Ҫ��ͬ������,���û�У�ֻ�ܵ��ø���ĺ��� 
//                         //�����̳��з��ʲ���ȷ������
//						//������ʹ�ã��ṹ���ӣ��ڴ濪���Ƚϴ�
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
//	//�����ָ��ָ��ͬ���������ռ䣬ֻ��Ҫ�ı�ָ�����ʵ�ֵ��ò�ͬ����ĺ������Ӷ�ʵ�ֶ�̬
//	//�����ָ��ָ������Ŀռ�
//	//���ʹ��ָ�룬��ָ������;���
//	//int* a = new char; //�����ͳ�����
//	fa->Show(); //��ͨ��ֻ�ܵ������ڸ���ĳ�Ա�������ָ����ò�������ĺ���
//
//	system("pause");
//	return 0;
//}