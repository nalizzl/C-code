#define _CRT_SECURE_NO_WARNINGS 
//������2
//����û�����ñ��������䳤�����޷�ʹ�ã�������Ϊ�̶�����
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
			printf("%d Ϊ������\n", arr[a]);
		}
	}
	return 0;
}