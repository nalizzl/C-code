#define _CRT_SECURE_NO_WARNINGS
//单身狗1
//#include<stdio.h>
//int main()//废案：不支持变长数组。。。。
//{
//    int a, b, c;
//    scanf("%d", &a);
//    if (a % 2 == 0)
//    {
//        printf("输入有误");
//        return 0;
//    }
//    int arr[a] = { 0 };
//    for (b = 0, c = 0; b <= a; b++)
//    {
//        scanf("%d", arr[b]);
//        c ^= arr[b];
//    }
//    printf("%d", c);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int b, c;
//    int arr[9] = { 0 };
//    for (b = 0, c = 0; b < 9; b++)
//    {
//        scanf("%d", &arr[b]);
//        c = c ^ arr[b];
//    }
//    printf("%d", c);
//    return 0;
//}
//交换两个变量（不创建临时变量）
//#include<stdio.h>
//int main()
//{
//    int a, b;
//    scanf("%d%d", &a, &b);
//    a ^= b;
//    b ^= a;
//    a ^= b;
//    printf("%d %d", a, b);
//    return 0;
//}
// 
// 
//统计n补码1个数（牛客）
/**
 * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
 *
 *
 * @param n int整型
 * @return int整型
 */
 //int NumberOf1(int n) {
 //    // write code here
 //    int count = 0;
 //    scanf("%d", &n);
 //    while(n)
 //    {
 //        n &= (n - 1);
 //        count++;
 //    }
 //    return count;
 //}

//求两个数二进制位相异个数
//#include <stdio.h>
//int main() {
//    int a, b, count = 0;
//    while (scanf("%d %d", &a, &b) != EOF) { // 注意 while 处理多个 case
//        // 64 位输出请用 printf("%lld") to 
//        int tmp = a ^ b;//相异为1，将求不同位转化为求一的个数
//        while (tmp)
//        {
//            tmp &= (tmp - 1);
//            count++;
//        }
//        printf("%d\n", count);
//    }
//    return 0;
//}

//获取一个整数二进制的奇数位和偶数位，并打印出序列
//#include<stdio.h>
//int main()
//{
//	int a, b, i, num, flag;
//	int arr1[16] = { 0 };
//	int arr2[16] = { 0 };
//	scanf("%d", &num);
//	for (a = 0, b = 0, i = 0; i < 32; i++)
//	{
//		flag = num & (1 << i);
//		if ((i + 1) % 2 == 1)
//		{
//			if (flag == 0)
//				arr1[a] = 0;
//			else
//				arr1[a] = 1;
//			a++;
//		}
//		else
//		{
//			if (flag == 0)
//				arr2[b] = 0;
//			else
//				arr2[b] = 1;
//			b++;
//		}
//	}
//	printf("奇数序列为：\n");
//	for (a = 15; a >= 0; a--)
//	{
//		printf("%d ", arr1[a]);
//	}
//	printf("\n偶数序列为：\n");
//	for (b = 15; b >= 0; b--)
//	{
//		printf("%d ", arr2[b]);
//	}
//	return 0;
//}