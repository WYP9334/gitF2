//#include <iostream>
//#include <string.h>
// 
//using namespace std;
// 
//class ClassA
//{
//public:
//    ClassA()
//    {
//    
//    }
// 
//    ClassA(const char* pszInputStr)
//    {
//        pszTestStr = new char[strlen(pszInputStr) + 1];
//        strncpy(pszTestStr, pszInputStr, strlen(pszInputStr) + 1);
//    }
//    virtual ~ClassA()
//	//~ClassA()
//    {
//        delete pszTestStr;
//    }
//public:
//    char* pszTestStr;
//};
// 
//int main()
//{
//    ClassA obj1("liitdar");
// 
//    ClassA obj2;
//    obj2 = obj1;
// 
//    cout << "obj2.pszTestStr is: " << obj2.pszTestStr << endl;
//    cout << "addr(obj1.pszTestStr) is: " << &obj1.pszTestStr << endl;
//    cout << "addr(obj2.pszTestStr) is: " << &obj2.pszTestStr << endl;
// 
//    return 0;
//}
