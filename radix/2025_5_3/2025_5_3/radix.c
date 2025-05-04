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