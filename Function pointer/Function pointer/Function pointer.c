#define _CRT_SECURE_NO_WARNINGS 

//ת�Ʊ�����ָ�����飩
//#include<stdio.h>
//int add(int a, int b)
//{
//	return a + b;
//}
//int sub(int a, int b)
//{
//	return a - b;
//}
//int mul(int a, int b)
//{
//	return a * b;
//}
//int div(int a, int b)
//{
//	return a / b;
//}
//void menu()
//{
//	printf("*********************************\n");
//	printf("*******������Լ������Ĳ�����****\n");
//	printf("*******0.exit         ***********\n");
//	printf("*******1.add     2.sub***********\n");
//	printf("*******3.mul     4.div***********\n");
//	printf("*********************************\n");
//}
//int main()
//{
//	int a, b, input = 0;
//	int (*p[5])(int a, int b) = { 0, add, sub, mul, div };
//	do {
//		menu();
//		scanf("%d", &input);
//		if (input > 0 && input < 5)
//		{
//			printf("�������������\n");
//			scanf("%d%d", &a, &b);
//			int ret = (*p[input])(a, b);
//			printf("���Ϊ��%d \n", ret);
//		}
//		else if (input == 0)
//			printf("�˳�������\n");
//		else
//			printf("������������������\n");
//	} while (input);
//	return 0;
//}

//