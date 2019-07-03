//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void)
//{
//    int n1 = 0, n2 = 0, n3 = 0, n4 = 0;
//    int temp;
//    int time[6];
//    int *pt = time;
//    scanf("[%d,%d,%d,%d,%d,%d]", pt, pt + 1, pt + 2, pt + 3, pt + 4, pt + 5);
//    for (int i = 0; i < 6; i++) {
//        if (*(pt + i) < 0) 
//            printf("invalid\n");
//        if (*(pt + i) >= 6)
//            n1++;
//        if (*(pt + i) >= 4)
//            n2++;
//        if (*(pt + i) >= 3)
//            n3++;
//        if (*(pt + i) >= 2)
//            n4++;
//    }
//    if (n1 >= 2 || n2 >= 4 || n1 >= 5 || n1 >= 6) {
//        printf("invalid\n");
//		exit(-1);
//	}
//    for (int i = 0; i < 6; i++) {
//        int max = 0;
//        if (*(pt + i) >= 0 && *(pt + i) <= 2) {
//            if (*(pt + i) > max) {
//                max = *(pt + i);
//                temp = *pt;
//                *pt = *(pt + i);
//                *(pt + i) = temp;
//            }
//    }
//    }
//    for (int i = 1; i < 6; i++) {
//        int max = 0;
//        if (*(pt + i) >= 0 && *(pt + i) <= 3) {
//            if (*(pt + i) > max) {
//                max = *(pt + i);
//                temp = *(pt + 1);
//                *(pt + 1) = *(pt + i);
//                *(pt + i) = temp;
//            }
//        }
//    }
//    for (int i = 2; i < 6; i++) {
//        int max = 0;
//        if (*(pt + i) >= 0 && *(pt + i) <= 5) {
//            if (*(pt + i) > max) {
//                max = *(pt + i);
//                temp = *(pt + 2);
//                *(pt + 2) = *(pt + i);
//                *(pt + i) = temp;
//            }
//        }
//    }
//    for (int i = 3; i < 6; i++) {
//        int max = 0;
//        if (*(pt + i) >= 0 && *(pt + i) <= 9) {
//            if (*(pt + i) > max) {
//                max = *(pt + i);
//                temp = *(pt + 3);
//                *(pt + 3) = *(pt + i);
//                *(pt + i) = temp;
//            }
//        }
//    }
//    for (int i = 4; i < 6; i++) {
//        int max = 0;
//        if (*(pt + i) >= 0 && *(pt + i) <= 5) {
//            if (*(pt + i) > max) {
//                max = *(pt + i);
//                temp = *(pt + 4);
//                *(pt + 4) = *(pt + i);
//                *(pt + i) = temp;
//            }
//        }
//    }
//    for (int i = 5; i < 6; i++) {
//        int max = 0;
//        if (*(pt + i) >= 0 && *(pt + i) <= 9) {
//            if (*(pt + i) > max) {
//                max = *(pt + i);
//                temp = *(pt + 5);
//                *(pt + 5) = *(pt + i);
//                *(pt + i) = temp;
//            }
//        }
//    }
//    printf("%d%d:%d%d:%d%d\n", *pt, *(pt + 1), *(pt + 2), *(pt + 3), *(pt + 4), *(pt + 5));
//    return 0;
//}
//#include <stdio.h>
//
//int main(void)
//{
//	int n1 = 0, n2 = 0, n3 = 0, n4 = 0;
//	int temp;
//	int time[6];
//	int *pt = time;
//	scanf("[%d,%d,%d,%d,%d,%d]", pt, pt + 1, pt + 2, pt + 3, pt + 4, pt + 5);
//	for (int i = 0; i < 6; i++) {
//		if (*(pt + i) < 0) 
//			printf("invalid");
//		if (*(pt + i) >= 6)
//			n1++;
//		if (*(pt + i) >= 4)
//			n2++;
//		if (*(pt + i) >= 3)
//			n3++;
//		if (*(pt + i) >= 2)
//			n4++;
//	}
//	if (n1 >= 2 || n2 >= 4 || n1 >= 5 || n1 >= 6)
//		printf("invalid");
//
//	for (int i = 0; i < 6; i++) {
//		int max = 0;
//		if (*(pt + i) >= 0 && *(pt + i) <= 2) {
//			if (*(pt + i) > max) {
//				max = *(pt + i);
//				temp = *pt;
//				*pt = *(pt + i);
//				*(pt + i) = temp;
//			}
//		}
//	}
//	for (int i = 1; i < 6; i++) {
//		int max = 0;
//		if (*(pt + i) >= 0 && *(pt + i) <= 3) {
//			if (*(pt + i) > max) {
//				max = *(pt + i);
//				temp = *(pt + 1);
//				*(pt + 1) = *(pt + i);
//				*(pt + i) = temp;
//			}
//		}
//	}
//	for (int i = 2; i < 6; i++) {
//		int max = 0;
//		if (*(pt + i) >= 0 && *(pt + i) <= 5) {
//			if (*(pt + i) > max) {
//				max = *(pt + i);
//				temp = *(pt + 2);
//				*(pt + 2) = *(pt + i);
//				*(pt + i) = temp;
//			}
//		}
//	}
//	for (int i = 3; i < 6; i++) {
//		int max = 0;
//		if (*(pt + i) >= 0 && *(pt + i) <= 9) {
//			if (*(pt + i) > max) {
//				max = *(pt + i);
//				temp = *(pt + 3);
//				*(pt + 3) = *(pt + i);
//				*(pt + i) = temp;
//			}
//		}
//	}
//	for (int i = 4; i < 6; i++) {
//		int max = 0;
//		if (*(pt + i) >= 0 && *(pt + i) <= 5) {
//			if (*(pt + i) > max) {
//				max = *(pt + i);
//				temp = *(pt + 4);
//				*(pt + 4) = *(pt + i);
//				*(pt + i) = temp;
//			}
//		}
//	}
//	for (int i = 5; i < 6; i++) {
//		int max = 0;
//		if (*(pt + i) >= 0 && *(pt + i) <= 9) {
//			if (*(pt + i) > max) {
//				max = *(pt + i);
//				temp = *(pt + 5);
//				*(pt + 5) = *(pt + i);
//				*(pt + i) = temp;
//			}
//		}
//	}
//	printf("%d%d:%d%d:%d%d\n", *pt, *(pt + 1), *(pt + 2), *(pt + 3), *(pt + 4), *(pt + 5));
//	return 0;
//}