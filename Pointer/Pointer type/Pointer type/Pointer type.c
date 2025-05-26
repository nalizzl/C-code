#define _CRT_SECURE_NO_WARNINGS 

//字符串逆序
//#include <stdio.h>
//#include<string.h>
//int main() {
//    int tmp;
//    char arr[10000] = { 0 };
//    gets(arr);
//    int i = strlen(arr);
//    int left = 0, right = i - 1;
//    for (tmp = 0; left < right;)
//    {
//        tmp = arr[left];
//        arr[left] = arr[right];
//        arr[right] = tmp;
//        left++;
//        right--;
//    }
//    printf(arr);
//    return 0;
//}

//模拟实现strlen
//#include<stdio.h>
//size_t sim_strlen(char * s)
//{
//	int count = 0;
//	while (*s != '\0')
//	{
//		count++;
//		s++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "hello bit";
//	size_t ret = sim_strlen(arr);
//	printf("%zu ", ret); 
//	return 0;
//}

//调整数组奇偶数顺序，前半部分奇数，后半部分偶数
//#include<stdio.h>
//void ch_o_e(int * arr)
//{
//	int a, b, tmp;
//	for (a = 0; a < 10; a++)
//	{
//		if (arr[a] % 2 == 1)
//			continue;
//		for (b = a + 1; b < 10; b++)
//		{
//			if (arr[b] % 2 == 1)
//			{
//				tmp = arr[a];
//				arr[a] = arr[b];
//				arr[b] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 0,2,3,4,5,6,9,7,8,1 };
//	ch_o_e(arr);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//字符串左旋（三步逆置法）
//#include<stdio.h>
//#include<string.h>
//void reverse(char * arr1, char * arr2)
//{
//	for (char tmp = 0; arr1 < arr2;)
//	{
//		tmp = *arr1;
//		*arr1 = *arr2;
//		*arr2 = tmp;
//		arr1++;
//		arr2--;
//	}
//}
//int main()
//{
//	int i;
//	char arr[] = "abcdefgh";
//	size_t len = strlen(arr);
//	scanf("%d", &i);
//	i %= len;//左旋的个数大于字符串长度
//	printf("%s \n", arr);
//	reverse(arr, arr + i - 1);
//	reverse(arr + i, arr + len - 1);
//	reverse(arr, arr + len - 1);
//	printf(arr);
//	return 0;
//}