#define _CRT_SECURE_NO_WARNINGS 
//ţ���ж�������
//#include <stdio.h>
//int main() {
//    int a, b, c;
//    while (scanf("%d%d%d", &a, &b, &c) != EOF) { // ע�� while ������ case
//        // 64 λ������� printf("%lld") to 
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

////��������Ϸ 100��200�����δ�������
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//
//void menu()
//{
//	printf("*************************\n");
//	printf("*******0.�˳���Ϸ********\n");
//	printf("*******1.��ʼ��Ϸ********\n");
//	printf("*************************\n");
//	printf("��ѡ��\n");
//}
//
//void game()
//{
//	int guess, count = 6;
//	int ret = 100 + rand() % 101;
//	while (count)
//	{
//		printf("��һ��100��200֮�������������%d�λ��ᣬ�����룺\n", count);
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("��С��,�������\n");
//		}
//		else if (guess > ret)
//		{
//			printf("�´��ˣ��������\n");
//		}
//		else
//		{
//			printf("�¶��ˣ���ȷ����ǣ�%d\n", ret);
//			break;
//		}
//		count--;
//	}
//	if (count != ret && count == 0)
//	{
//		printf("ʣ�����Ϊ%d,��ȷ�����%d\n", count, ret);
//	}
//	else
//	{
//		printf("��ϲ�㣬��Ϸͨ�أ�����\n");
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
//			printf("������������������\n");
//		}
//	}
//	return 0;
//}