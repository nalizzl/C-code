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
//矩阵转置（使用变长数组版本）
//#include <stdio.h>
//int main() {
//    int n, m, i, j;
//    scanf("%d%d", &n, &m);
//    int aa[m][n];
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &aa[j][i]);
//        }
//    }
//    for (i = 0; i < m; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            printf("%d ", aa[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//
//合并数组并排序
// 不使用变长数组的版本
//#include <stdio.h>
//int main() {
//    int i, j, tmp;
//    int arr[5], ray[6], array[11];
//    for (i = 0; i < 5; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (i = 0; i < 6; i++)
//    {
//        scanf("%d", &ray[i]);
//    }
//    for (i = 0; i < 11; i++)
//    {
//        if (i < 5)
//            array[i] = arr[i];
//        else
//            array[i] = ray[i - 5];
//    }
//    for (i = 0, tmp = 0; i < 11 - 1; i++)
//    {
//        for (j = i; j < 11 - 1 - i; j++)
//        {
//            if (array[j] > array[j + 1])
//            {
//                tmp = array[j];
//                array[j] = array[j + 1];
//                array[j + 1] = tmp;
//            }  
//        }
//    }
//    i = 0;
//    while (i < 11)
//    {
//        printf("%d ", array[i]);
//        i++;
//    }
//    return 0;
//}
//
//牛客上的变长数组版本
//#include <stdio.h>
//int main() {
//    int n, m, i, j, tmp;
//    scanf("%d%d", &n, &m);
//    int arr[n], ray[m], array[n + m];
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (i = 0; i < m; i++)
//    {
//        scanf("%d", &ray[i]);
//    }
//    for (i = 0; i < n + m; i++)
//    {
//        if (i < n)
//            array[i] = arr[i];
//        else
//            array[i] = ray[i - n];
//    }
//    for (i = 0; i < n + m - 1; i++)
//    {
//        for (j = 0; j < n + m - i - 1; j++)
//        {
//            if (array[j] > array[j + 1])
//            {
//                tmp = array[j];
//                array[j] = array[j + 1];
//                array[j + 1] = tmp;
//            }
//        }
//    }
//    i = 0;
//    while (i < n + m)
//    {
//        printf("%d ", array[i]);
//        i++;
//    }
//    return 0;
//}

//打印空心正方形
//#include <stdio.h>
//#include<string.h>
//int main() {
//    int a = 4, b;
//        char arr1[5];
//        char arr2[5];
//        memset(arr2, 0, 5);
//        memset(arr2, '*', 4);
//        memset(arr1, 0, 5);
//        arr1[0] = '*';
//        arr1[4] = '*';
//        while (a)
//        {
//            for (b = 0; b < 4; b++)
//            {
//                if (a == 4 || a == 1)
//                {
//                    printf("%c ", arr2[b]);
//                }
//                else
//                {
//                    printf("%c ", arr1[b]);
//                }
//            }
//            printf("\n");
//            a--;
//        }
//    return 0;
//}
// //有时间找找下面的代码究竟为什么在牛客网上得不到正确答案
//#include <stdio.h>
//#include<string.h>
//int main() {
//    int a, b, c;
//    while (scanf("%d", &a) != EOF) { // 注意 while 处理多个 case
//        char arr1[a + 1];
//        char arr2[a + 1];
//        memset(arr2, 0, a + 1);
//        memset(arr2, '*', a);
//        memset(arr1, 0, a + 1);
//        arr1[0] = '*';
//        arr1[a - 1] = '*';
//        c = a;
//        while (c)
//        {
//            for (b = 0; b < a; b++)
//            {
//                if (c == 1 || c == a)
//                {
//                    printf("%c ", arr2[b]);
//                }
//                else
//                {
//                    printf("%c ", arr1[b]);
//                }
//            }
//            printf("\n");
//            c--;
//        }
//    }
//    return 0;
//}
//

//在牛客网上最后提交成功版本
//#include <stdio.h>
//int main() {
//    int a, b, c;
//    while (scanf("%d", &a) != EOF) { // 注意 while 处理多个 case
//        c = a;
//        char arr[a][a];
//        while (c)
//        {
//            for (b = 0; b < a; b++)
//            {
//                if (c == a || c == 1)
//                {
//                    arr[c - 1][b] = '*';
//                }
//                else
//                {
//                    if (b == 0 || b == a - 1)
//                    {
//                        arr[c - 1][b] = '*';
//                    }
//                    else
//                    {
//                        arr[c - 1][b] = ' ';
//                    }
//                }
//            }
//            c--;
//        }
//        for (b = 0; b < a; b++)
//        {
//            for (c = 0; c < a; c++)
//            {
//                printf("%c ", arr[b][c]);
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}