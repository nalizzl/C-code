#define _CRT_SECURE_NO_WARNINGS 

//写一个函数判断闰年
//#include<stdio.h>
//check_year(int year)
//{
//	if (year % 4 == 0 || year % 100 == 0)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year;
//	scanf("%d", &year);
//	int i = check_year(year);
//	if (i)
//		printf("%d 是闰年", year);
//	else
//		printf("%d 不是闰年", year);
//	return 0;
//}


//二分查找
//#include<stdio.h>
//int bin_search(int * arr, int left, int right, int key)
//{
//	int flag = 0;
//	for (; left <= right;)
//	{
//		if (*(arr + left) == key)
//		{
//			flag = 1;
//			return left;
//		}
//		else if (*(arr + right) == key)
//		{
//			flag = 1;
//			return right;
//		}
//		left++;
//		right--;
//	}
//	return 11;
//}
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int key;
//	printf("查找arr数组中是否存在：\n");
//	scanf("%d", &key);
//	int left = 0, right = (sizeof(arr) / sizeof(arr[0])) - 1;
//	int ret = bin_search(arr, left, right, key);
//	if (ret != 11)
//		printf("找到了，下标是%d", ret);
//	else
//		printf("找不到");
//	return 0;
//}

//函数判断素数以及打印素数
//int is_prime(int input)
//{
//	int i;
//	if (input == 2)
//		return input;
//	for (i = 2; i < input; i++)
//	{
//		if (input % i == 0)
//			return 0;//不是素数
//	}
//	return input;
//}
//#include<stdio.h>
//int main()
//{
//	int i;
//	//判断素数
//	/* scanf("%d", &input);
//	int ret = is_prime(input);
//	if (ret)
//		printf("%d是素数", input);
//	else
//		printf("%d不是素数", input);*/
//	for (i = 100; i <= 200; i++)
//	{
//		int ret = is_prime(i);
//		if (ret)
//			printf("%d ", i);
//	}
//	return 0;
//}

//函数打印乘法口诀表
//#include<stdio.h>
//void print_mul(int a)
//{
//	int i, j;
//	for (i = 1; i <= a; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d * %d == %d ", j, i, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int a, b;
//	scanf("%d", &a);
//	print_mul(a);
//	return 0;
//}


//使用函数实现数组操作
//#include<stdio.h>
//void init(int* arr1, int right)
//{
//	int i;
//	for (i = 0; i <= right; i++)
//	{
//		arr1[i] = 0;
//	}
//}
//void print(int* arr2, int right)
//{
//	int i;
//	for (i = 0; i <= right; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//}
//void reverse(int* arr3, int left, int right)
//{
//	int tmp;
//	for (tmp = 0;left < right;)
//	{
//		tmp = arr3[left];
//		arr3[left] = arr3[right];
//		arr3[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int i, arr[10];
//	int left = 0, right = (sizeof(arr) / sizeof(arr[0]) - 1);
//	init(arr, right);
//	print(arr, right);//初始化为0后打印
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	reverse(arr, left, right);
//	printf("\n");
//	print(arr, right);//逆置后打印
//	return 0;
//}