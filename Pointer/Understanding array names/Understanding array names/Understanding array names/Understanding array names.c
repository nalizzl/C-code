#define _CRT_SECURE_NO_WARNINGS 

//��ʹ�������±꣬дһ��������ӡ����
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

//ð������
//#include<stdio.h>
//void bubble(int * arr1)//��С��������
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

//�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת����
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
//	char arr3[] = "aaaaaaaa";//��֤������ת���õ����
//	size_t len = strlen(arr);
//	int ret = check_rot(len, arr, arr3);
//	if (ret)
//		printf("��arr3�ַ�������arr�ַ�����ת����\n");
//	else
//		printf("��arr3�ַ�����������arr�ַ�����ת����\n");
//	return 0;
//}

//������
//#include<stdio.h>
//int main()
//{
//	for (char killer = 'A'; killer <= 'D'; killer++)
//	{
//		if ((killer != 'A') + (killer == 'C') + (killer == "D") + (killer != "D") == 3)
//		{
//			printf("�����ǣ�%c\n", killer);
//		}
//	}
//	return 0;
//}

//��ӡ�������
//#include<stdio.h>
//int main()
//{
//	int arr[100][100] = { 0, 1 };
//	int r = 1, c = 1, n;
//	printf("������Ҫ��ӡ���������������\n");
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
