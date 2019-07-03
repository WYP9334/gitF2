//#include <iostream>
//
//class Square {
//public:
//	Square(int len) {
//		length = (int *)malloc(sizeof(int));
//		*length = len;
//	}
//	void setLength(int len) {
//		*length = len;
//	}
//	int area() {
//		return *length * *length;
//	}
//	~Square() {
//		free(length);
//		length = NULL;
//	}
//private:
//	int *length;
//};
//
//int main()
//{
//	Square cube1(3);
//	printf("area1=%d\n", cube1.area());
//	Square cube2(cube1);
//	printf("area2=%d\n", cube2.area());
//	return 0;
//}