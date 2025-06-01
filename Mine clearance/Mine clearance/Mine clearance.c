#define _CRT_SECURE_NO_WARNINGS 

//1到100000水仙花数
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int sum = 0, a = 0, j = 0, count = 0;
//	for (int i = 1; i <= 100000; i++)
//	{
//		j = i;
//		count = 0;
//		while (j)
//		{
//			j /= 10;
//			count++;
//		}
//		j = i;
//		sum = 0;
//		for (int tmp = count; tmp > 0; tmp--)
//		{
//			a = j % 10;
//			int c = pow(a, count);
//			sum += c;
//			j /= 10;
//		}
//		if (sum == i)
//			printf("%d ", i);
//	}
//	return 0;
//}

//打印菱形
//#include<stdio.h>
//int main()
//{
//	for (int a = 1; a <= 13; a++)
//	{
//		int c = a;
//		if (a <= 7)
//		{
//			while (7 - c)
//			{
//				printf(" ");
//				c++;
//			}
//			for (int b = 2 * a - 1; b >= 1; b--)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//		else
//		{
//			while (c - 7)
//			{
//				printf(" ");
//				c--;
//			}
//			for (int d = (13 - a) * 2 + 1; d >= 1; d--)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}			
//	}
//	return 0;
//}

//计算求和（Sn = a + aa + aaa + aaaa + aaaaa）
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int a, sum = 0;
//	scanf("%d", &a);
//	for (int count = 0; count <= 4; count++)
//	{
//		for (int b = 0; b <= count; b++)
//		{
//			if (b == 0)
//				sum += a;
//			else
//			{
//				int i = (int)pow(10, b);
//				sum += a * i;
//			}
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}

//喝汽水问题
//#include<stdio.h>
//int main()
//{
//	printf("请输入你有几块钱：\n");
//	int a, y, count = 0, tmp = 0, input = 0;
//	scanf("%d", &input);
//	a = input;
//	y = a;
//	count = a;
//	while (y)
//	{
//		if (y % 2 == 1 && y != 1)
//		{
//			tmp = 1;
//			y--;
//		}
//		a = y / 2;
//		count += a;
//		y = a + tmp;
//		tmp = 0;
//	}
//	printf("%d", count);
//	return 0;
//}