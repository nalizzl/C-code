#define _CRT_SECURE_NO_WARNINGS 
//单身狗数2
//由于没有设置编译器，变长数组无法使用，故数组为固定长度
#include<stdio.h>
int main()
{
	int a, b, c, flag, arr[10];
	for (a = 0; a < 10; a++)
	{
		scanf("%d", &arr[a]);
	}
	for (a = 0; a < 10; a++)
	{
		for (b = -1, flag = 0; b < 9; b++)
		{
			if (b == a)
			{
				continue;
			}
			c = arr[a] ^ arr[b];
			if (c == 0)
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0)
		{
			printf("%d 为单身狗数\n", arr[a]);
		}
	}
	return 0;
}