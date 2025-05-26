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
