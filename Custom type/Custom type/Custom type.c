#define _CRT_SECURE_NO_WARNINGS 

//利用联合体写一个函数判断大小端字节序
//#include<stdio.h>
//union un
//{
//	int a;
//	char b;
//};
//int check_sys()
//{
//	union un check;
//	check.a = 1;
//	return (check.b);
//}
//int main()
//{
//	int i = check_sys();
//	if (0 == i)
//		printf("是大端存储\n");
//	else
//		printf("是小端存储\n");
//	return 0;
//}

//变种水仙花数
//#include <stdio.h>
//#include<math.h>
//int Lily(int i, int j)
//{
//    int tmp = i;
//    if (j == 0)
//        return 0;
//    int c = tmp / (int)pow(10, j);
//    int d = tmp % (int)pow(10, j);
//    return Lily(i, j - 1) + c * d;
//}
//int main() {
//    for (int a = 10000; a < 100000; a++)
//    {
//        int b = a;
//        int count = 0;
//        while (b)
//        {
//            b /= 10;
//            count++;
//        }
//        b = a;
//        int ret = Lily(b, count - 1);
//        if (ret == a)
//            printf("%d ", a);
//    }
//    return 0;
//}

//序列删除指定数字
//#include <stdio.h>
//#include<stdlib.h>
//int main() {
//    int i, j;
//    scanf("%d", &i);
//    int* arr = (int*)malloc(sizeof(int) * i);
//    if (arr == NULL)
//        return 1;
//    for (int a = 0; a < i; a++)
//    {
//        scanf("%d", (arr + a));
//    }
//    scanf("%d", &j);
//    for (int b = 0; b < i; b++)
//    {
//        if (*(arr + b) == j)
//            *(arr + b) = 0;
//        else
//            printf("%d ", *(arr + b));
//    }
//    free(arr);
//    arr = NULL;
//    return 0;
//}
