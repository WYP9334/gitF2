//#include <iostream>
//
//using namespace std;
//
////����ռ���ʼ���ֽ����ݣ�������麯���б��ĵ�ַ������ָ�롣
//
//class CFather
//{
//public:
//	//ֻҪ�д��麯���ͳ���������
//	//������Ǵ��麯�����Ǿͳ������ӿ��ࡱ
//	virtual void vir_fun() = 0; //���麯�����ص㣺����û�к���ʵ�֣��̳����������������ȥʵ���������ܶ������
//
//	////virtual CFather& Show() //�����Э�䣬��Ҫ���������ֱ�ʹ���������
//	//virtual void Show() //�麯������������������д�˲�����������ʱ����Զ�ȥ��
//	//	//���캯���������麯��
//	//{
//	//	cout << "class CFather\n";
//	//}
//	//virtual ~CFather() //����������
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
////	//virtual CSon& Show() //�����Э�䣬��Ҫ���������ֱ�ʹ���������
////	int aa; //���顱ֻ����ں�����Ա
////	void Show() //�����Show()ȥ��д�˸����Show(),��д��������麯���ģ��������������ͨ�����ġ�
////		//ǰ��ʡ����virtual,�����֤�أ�����һ����������
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
////	int aa_son; //���顱ֻ����ں�����Ա
////	void Show() //�����Show()ȥ��д�˸����Show(),��д��������麯���ģ��������������ͨ�����ġ�
////		//ǰ��ʡ����virtual,�����֤�أ�����һ����������
////		//�����ֶ���ӣ���������ϵͳҲ����������
////	{
////		cout << "class CSonSon\n";
////	}
////};
//
//int main()
//{
//	////CFather vir;//�д��麯��������ǲ��ܴ�������ġ�
//	CSon vir;
//
//	//CFather* fa = new CSon; //ֻ��ָ��������ռ䣬����ռ��ͬ�����������麯��
//	//fa->Show(); 
//	
//	/*typedef void (*p)();*/
//
//	//((p)(*((int*)*(int*)fa + 0)))(); //*(int*)fa�����׵�ַ��fa�������ռ���׵�ַ��*((int*)*(int*)fa)������д洢�������׵�ַ��
//	//int* pp = (int*)(*((int*)*(int*)fa + 1));  //����β��
//
//	//cout << pp << endl;
//
//	/*CSon* so = new CSonSon;
//	so->Show();*/
//
//	//delete (CXiaoMing*)fa; //delete��ָ���������˭���͵���˭���������������������Ŀռ�ᱻ�ͷţ����Ƕ����Ա����Ŀռ䲻�ᱻ�ͷš�
//	/*delete so;*/
//	system("pause");
//	return 0;
//}