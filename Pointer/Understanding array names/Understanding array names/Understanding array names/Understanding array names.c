#define _CRT_SECURE_NO_WARNINGS 

//不使用数组下标，写一个函数打印数组
//#include<stdio.h>
//void Print_arr(int * p)
//{
//	int b;
//	for (b = 0; b < 5; b++)
//	{
//		printf("%d ", *(p + b));
//	}
//}
//int main()
//{
//	int a, arr[5];
//	int* pa = arr;
//	for (a = 0; a < 5; a++)
//	{
//		scanf("%d", (pa + a));
//	}
//	Print_arr(arr);
//	return 0;
//}

//冒泡排序
//#include<stdio.h>
//void bubble(int * arr1)//从小到大排序
//{
//	int i, j, tmp;
//	for (i = 0; i < 9; i++)
//	{
//		for (j = i; j < 10; j++)
//		{
//			if (arr1[i] > arr1[j])
//			{
//				tmp = arr1[i];
//				arr1[i] = arr1[j];
//				arr1[j] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 5,2,4,1,8,0,3,9,7,6 };
//	bubble(arr);
//	for (int a = 0; a < 10; a++)
//	{
//		printf("%d ", arr[a]);
//	}
//	return 0;
//}

//判断一个字符串是否为另外一个字符串旋转而得
//#include<stdio.h>
//#include<string.h>
//void reverse(char * arr1, char * arr2)
//{
//	for (int tmp = 0; arr1 < arr2; )
//	{
//		tmp = *(arr1);
//		*(arr1) = *(arr2);
//		*(arr2) = tmp;
//		arr1++;
//		arr2--;
//	}
//}
//int check_rot(int len, const char * arr, char *arr3)
//{
//	for (int i = 1; i <= len; i++)
//	{
//		reverse(arr, arr + i - 1);
//		reverse(arr + i, arr + len - 1);
//		reverse(arr, arr + len - 1);
//		int ret = strcmp(arr, arr3);
//		if (ret == 0)
//			return 1;
//	}
//	return 0;
//
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	//char arr3[] = "defgabc";
//	char arr3[] = "aaaaaaaa";//验证不是旋转而得的情况
//	size_t len = strlen(arr);
//	int ret = check_rot(len, arr, arr3);
//	if (ret)
//		printf("该arr3字符串是由arr字符串旋转而得\n");
//	else
//		printf("该arr3字符串并不是由arr字符串旋转而得\n");
//	return 0;
//}

//猜凶手
//#include<stdio.h>
//int main()
//{
//	for (char killer = 'A'; killer <= 'D'; killer++)
//	{
//		if ((killer != 'A') + (killer == 'C') + (killer == "D") + (killer != "D") == 3)
//		{
//			printf("凶手是：%c\n", killer);
//		}
//	}
//	return 0;
//}

//打印杨辉三角
//#include<stdio.h>
//int main()
//{
//	int arr[100][100] = { 0, 1 };
//	int r = 1, c = 1, n;
//	printf("请输入要打印的杨辉三角行数：\n");
//	scanf("%d", &n);
//	for (; r <= n; r++)
//	{
//		for (int i = 0; i < n - r; i++)
//		{
//			printf("  ");
//		}
//		arr[r][1] = 1;
//		for (c = 1; c <= r; c++)
//		{
//			if (r == c)
//				arr[r][c] = 1;
//			else
//				arr[r][c] = arr[r - 1][c - 1] + arr[r - 1][c];
//			printf("%5d", arr[r][c]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
