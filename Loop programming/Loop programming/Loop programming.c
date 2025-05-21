#define _CRT_SECURE_NO_WARNINGS 
//牛客判断三角形
//#include <stdio.h>
//int main() {
//    int a, b, c;
//    while (scanf("%d%d%d", &a, &b, &c) != EOF) { // 注意 while 处理多个 case
//        // 64 位输出请用 printf("%lld") to 
//        if (a + b <= c || a + c <= b || b + c <= a)
//        {
//            printf("Not a triangle!\n");
//        }
//        else
//        {
//            if (a == b && a == c)
//            {
//                printf("Equilateral triangle!\n");
//            }
//            else if ((a == b && a != c) || (a == c && a != b) || (b == c && b != a))
//            {
//                printf("Isosceles triangle!\n");
//            }
//            else
//            {
//                printf("Ordinary triangle!\n");
//            }
//        }
//    }
//    return 0;
//}

////猜数字游戏 100到200，六次次数限制
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//
//void menu()
//{
//	printf("*************************\n");
//	printf("*******0.退出游戏********\n");
//	printf("*******1.开始游戏********\n");
//	printf("*************************\n");
//	printf("请选择：\n");
//}
//
//void game()
//{
//	int guess, count = 6;
//	int ret = 100 + rand() % 101;
//	while (count)
//	{
//		printf("猜一个100到200之间的整数，还有%d次机会，请输入：\n", count);
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("猜小了,请继续：\n");
//		}
//		else if (guess > ret)
//		{
//			printf("猜大了，请继续：\n");
//		}
//		else
//		{
//			printf("猜对了，正确结果是：%d\n", ret);
//			break;
//		}
//		count--;
//	}
//	if (count != ret && count == 0)
//	{
//		printf("剩余机会为%d,正确结果是%d\n", count, ret);
//	}
//	else
//	{
//		printf("恭喜你，游戏通关！！！\n");
//	}
//}
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int input = 1;
//	while (input)
//	{
//		menu();
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 0:
//			break;
//		case 1:
//			game();
//			break;
//		default:
//			printf("输入有误，请重新输入\n");
//		}
//	}
//	return 0;
//}