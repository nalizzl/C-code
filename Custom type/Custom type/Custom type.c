#define _CRT_SECURE_NO_WARNINGS 

//利用联合体写一个函数判断大小端字节序
//#include<stdio.h>
//union un
//{
//	int a;
//	char b;
//};
//int check_sys()
//{
//	union un check;
//	check.a = 1;
//	return (check.b);
//}
//int main()
//{
//	int i = check_sys();
//	if (0 == i)
//		printf("是大端存储\n");
//	else
//		printf("是小端存储\n");
//	return 0;
//}