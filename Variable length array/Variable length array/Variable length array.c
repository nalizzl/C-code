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