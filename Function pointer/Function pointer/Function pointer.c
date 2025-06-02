#define _CRT_SECURE_NO_WARNINGS 

//转移表（函数指针数组）
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
//	printf("*******请输入对计算器的操作：****\n");
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
//			printf("请输入操作数：\n");
//			scanf("%d%d", &a, &b);
//			int ret = (*p[input])(a, b);
//			printf("结果为：%d \n", ret);
//		}
//		else if (input == 0)
//			printf("退出计算器\n");
//		else
//			printf("输入有误，请重新输入\n");
//	} while (input);
//	return 0;
//}

//