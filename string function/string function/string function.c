#define _CRT_SECURE_NO_WARNINGS 

//strncpy������
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char aa[] = "abc\0defghij";
//	char bb[100] = { 0 };
//	strncpy(bb, aa, 7);
//	printf("%s", bb);
//	return 0;
//}

//strlen��ģ��ʵ��

//#include<stdio.h>
////������
//size_t my_strlen1(const char * i)
//{
//	int count = 0;
//	while (*i != '\0')
//	{
//		count++;
//		i++;
//	}
//	return count;
//}
////��������ʱ�������ݹ飩
//size_t my_strlen2(const char * j)
//{
//	if (*j == '\0')
//		return 0;
//	else
//		return 1 + my_strlen2(j + 1);
//}
////ָ�� - ָ��
//size_t my_strlen3(const char * k)
//{
//	char* n = k;
//	while (*k != '\0')
//	{
//		k++;
//	}
//	return k - n;
//}
//int main()
//{
//	char arr[] = "absjfhj";
//	size_t ret1 = my_strlen1(arr);
//	size_t ret2 = my_strlen2(arr);
//	size_t ret3 = my_strlen3(arr);
//	printf("%zu\n", ret1);
//	printf("%zu\n", ret2);
//	printf("%zu\n", ret3);
//	return 0;
//}

//