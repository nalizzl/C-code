#define _CRT_SECURE_NO_WARNINGS 
//1��100��3�ı���
//#include<stdio.h>
//int main()
//{
//    int i = 0;
//    for (i = 1; i <= 100; i++)
//    {
//        if(i % 3 == 0)
//            printf("%d\n", i);
//    }
//    return 0;
//}
//�Ӵ�С���
//#include<stdio.h>
//int main()
//{
//    int a, b, c;
//    scanf("%d%d%d", &a, &b, &c);
//    if (b > a)
//    {
//        a = a ^ b;
//        b = a ^ b;
//        a = a ^ b;
//    }
//    if (c > a)
//    {
//        a = a ^ c;
//        c = a ^ c;
//        a = a ^ c;
//    }
//    if (c > b)
//    {
//        b = b ^ c;
//        c = b ^ c;
//        b = b ^ c;
//    }
//    printf("%d %d %d", a, b, c);
//    return 0;
//}
// �˷��ھ���
//#include<stdio.h>
//int main()
//{
//	int a, b;
//	for (a = 1; a <= 9; a++)
//	{
//		for (b = 1; b <= a; b++)
//		{
//			printf("%d * %d = %d ", b, a, a * b);
//		}
//		printf("\n");
//	}
//	return 0;
//}
// ��10���������ֵ
//#include<stdio.h>
//int main()
//{
//	int a, i, arr[10];
//	for (i = 0;i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	a = arr[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > a)
//		{
//			a = arr[i];
//		}
//	}
//	printf("%d", a);
//	return 0;
//}
//�������
//#include<stdio.h>
//int main()
//{
//	int a;
//	float sum;
//	for (a = 1, sum = 0; a <= 100; a++)
//	{
//		if (a % 2 != 0)
//		{
//			sum += 1.0 / a;
//		}
//		else
//			sum -= 1.0 / a;
//	}
//	printf("%f", sum);
//	return 0;
//}
//1��100���ֵ���9
//#include<stdio.h>
//int main()
//{
//	int a, count;
//	for (a = 1, count = 0; a <= 100; a++)
//	{
//		if (a % 10 == 9 || a / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d", ++count);
//	return 0;
//}
//100��200����
#include<stdio.h>
int main()
{
	
	return 0;
}