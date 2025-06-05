#define _CRT_SECURE_NO_WARNINGS 

#include<stdio.h>
void menu()
{
	printf("***********************\n");
	printf("*****1.enter **********\n");
	printf("*****0.exit  **********\n");
	printf("***********************\n");
}

int main()
{
	int n;
	scanf("%d", &n);
	while (n--)
	{
		printf("%d ", n);
	}
	return 0;
}