#define _CRT_SECURE_NO_WARNINGS 
//打印"X"型图案
// 不可使用变长数组的测试版本
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    int a, b, c, d;
//    char arr[6];
//    for (b = 0, c = 5 - 1; b < 5;)
//    {
//        memset(arr, 0, sizeof(arr));//用于初始化数组
//        arr[b] = '*';
//        arr[c] = '*';
//        for (d = 0; d < 5; d++)
//        {
//            if (arr[d] == '*')
//            {
//                printf("%c", arr[d]);
//            }
//            else
//            {
//                printf(" ");
//            }
//        }
//        printf("\n");
//        b++;
//        c--;
//    }
//	return 0;
//}
//牛客网上可以使用变长数组的版本
//#include <stdio.h>
//#include <string.h>
//int main() {
//    int a, b, c, d;
//    while (scanf("%d", &a) != EOF) { // 注意 while 处理多个 case
//        char arr[a + 1];
//        for (b = 0, c = a - 1; b < a;)
//        {
//            memset(arr, 0, sizeof(arr));//用于初始化数组
//            arr[b] = '*';
//            arr[c] = '*';
//            for (d = 0; d < a; d++)
//            {
//                if (arr[d] == '*')
//                {
//                    printf("%c", arr[d]);
//                }
//                else
//                {
//                    printf(" ");
//                }
//            }
//            printf("\n");
//            b++;
//            c--;
//        }
//    }
//    return 0;
//}
// 
//输入十个整数并输出平均值
//#include<stdio.h>
//int main()
//{
//	int i, sum, arr[10];
//	for (i = 0, sum = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//		sum += arr[i];
//	}
//	printf("%f", sum / 10.0);
//	return 0;
//}
//
//交换数组
//#include<stdio.h>
//int main()
//{
//	printf("每行输入两个数据，分别是两个数组的元素，也是需要交换的对象：\n");
//	int tmp, i, aa[5], bb[5];
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d%d", &aa[i], &bb[i]);
//		tmp = aa[i];
//		aa[i] = bb[i];
//		bb[i] = tmp;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", aa[i]);
//	}
//	printf("\n");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", bb[i]);
//	}
//	return 0;
//}
//
//逆序输出
//#include <stdio.h>
//int main() {
//    int left, right, arr[10];
//    for (left = 0; left < 10; left++)
//    {
//        scanf("%d", &arr[left]);
//    }
//    for (right = 9; right >= 0; right--)
//    {
//        printf("%d ", arr[right]);
//    }
//    return 0;
//}
//
//