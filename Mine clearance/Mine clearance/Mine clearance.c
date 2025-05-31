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
