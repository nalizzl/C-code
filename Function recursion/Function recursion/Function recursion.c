#define _CRT_SECURE_NO_WARNINGS 
//����Ϊ�����ݹ鲩�ʹ���
//// 
////#include <stdio.h>
////int main()
////{
////    printf("hello world\n");
////    main();//main�����е�����main����
////    return 0;
////}
////#include <stdio.h>
////long long int Fact(long long int n)
////{
////    if (n == 0)
////        return 1;
////    else
////        return n * Fact(n - 1);
////}
////long long int main()
////{
////    long long int n = 0;
////    scanf("%lld", &n);
////    long long int ret = Fact(n);
////    printf("%lld\n", ret);
////    return 0;
////}
//
////#include <stdio.h>
////int Fib(int n)
////{
////    if (n <= 2)
////        return 1;
////    else
////        return Fib(n - 1) + Fib(n - 2);
////}
////int main()
////{
////    int n = 0;
////    scanf("%d", &n);
////    int ret = Fib(n);
////    printf("%d\n", ret);
////    return 0;
////}
//#include <stdio.h>
//int Fib(int n)
//{
//    int a = 1;
//    int b = 1;
//    int c = 1;
//    while (n > 2)
//    {
//        c = a + b;
//        a = b;
//        b = c;
//        n--;
//    }
//    return c;
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int ret = Fib(n);
//    printf("%d\n", ret);
//    return 0;
//}



//����Ϊ�����ݹ���ҵ����

////������ѭ������
//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hello bit\n");
//    }
//    return 0;
//}


//����쳲����������ݹ��������
//#include<stdio.h>
////�ݹ鷽ʽ
//int feibo1(int input)
//{
//	if (input <= 2)
//		return 1;
//	else
//		return feibo1(input - 1) + feibo1(input - 2);
//}
////������ʽ
//int feibo2(int input)
//{
//	if (input <= 2)
//		return 1;
//	int a, b, c;
//	a = 1;
//	b = 1;
//	for (int count = 3; count <= input;)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		count++;
//	}
//	return c;
//}
//int main()
//{
//	int input;
//	scanf("%d", &input);
//	//int ret = feibo1(input);
//	int ret = feibo2(input);
//	printf("%d ", ret);
//	return 0;
//}

//ʹ�õݹ�ʵ�ּ���n��k�η�
//#include<stdio.h>
//int count_Thp(int n, int k)
//{
//	if (k == 0)
//		return 1;
//	else
//		return n * count_Thp(n, k - 1);
//}
//int main()
//{
//	printf("����n��k�η�,����n�� k\n");
//	int n, k;
//	scanf("%d%d", &n, &k);
//	int ret = count_Thp(n, k);
//	printf("%d ", ret);
//	return 0;
//}

////����һ������ÿλ֮�ͣ��ݹ�ʵ�֣�
//#include<stdio.h>
//int DigitSum(int n)
//{
//	int count = 1, i = 0;
//	while (n / 10 != 0)
//	{
//		n /= 10;
//		count++;
//	}
//	if (n < 9)
//		return n;
//	else
//		return (n % 10) + DigitSum(n / 10);
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int ret = DigitSum(n);
//	printf("%d ", ret);
//	return 0;
//}