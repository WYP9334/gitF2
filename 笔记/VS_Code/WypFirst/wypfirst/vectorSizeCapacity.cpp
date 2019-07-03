//#include <iostream>
//#include <vector>
//
//int main(void)
//{
//	std::vector<int> iv(2, 0);
//	std::cout << "size = " << iv.size() << "\tcapacity = " << iv.capacity() << std::endl;
//	iv.reserve(14);
//
//	for (int a = 1; a <= 8; a++) {
//		iv.push_back(a);
//		std::cout << "size = " << iv.size() << "\tcapacity = " << iv.capacity() << std::endl;
//	}
//	iv.shrink_to_fit();
//	std::cout << "size = " << iv.size() << "\tcapacity = " << iv.capacity() << std::endl;
//	iv.resize(7);
//	std::cout << "size = " << iv.size() << "\tcapacity = " << iv.capacity() << std::endl;
//	
//	for (std::vector<int>::iterator it = iv.begin(); it != iv.end(); it++) {
//		std::cout << *it << std::endl;
//	}
//	getchar();
//
//	return 0;
//}