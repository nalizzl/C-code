#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>
//memmove函数的模拟实现
//#include<assert.h>
//void * my_memmove(void * dest , void * src, size_t num)
//{
//	void* ret = dest;
//	assert(ret && dest && src);
//	//dest < src
//	if (dest < src)
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = ((char*)dest)++;
//			src = ((char*)src)++;
//		}
//	}
//	//dest >= src
//	else
//	{
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	void* ret = my_memmove(arr + 4, arr + 2, 16);
//	return 0;
//}

//atoi函数的学习与模拟实现
//c++官网范例：
#include <stdio.h>      /* printf, fgets */
#include <stdlib.h>     /* atoi */

int main()
{
	int i;
	char buffer[256];
	printf("Enter a number: ");
	fgets(buffer, 256, stdin);
	i = atoi(buffer);
	printf("The value entered is %d. Its double is %d.\n", i, i * 2);
	return 0;
}

//模拟实现
#include<stdio.h>
#include<assert.h>
int my_atoi(const char* str)
{
	const char* move = str;
	assert(str);
	char arr1[20] = {}
	while (*move != '\0')
	{
		if (*move == 32)
		{
			move++;
		}

	}
}

int main()
{
	my_atoi();
	return 0;
}

// 
// 
//int main()
//{
//	char a = 48;
//	printf("%d", a);
//	return 0;
//}