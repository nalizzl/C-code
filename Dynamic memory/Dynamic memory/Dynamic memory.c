#define _CRT_SECURE_NO_WARNINGS 

//力扣数组串联
///**
// * Note: The returned array must be malloced, assume caller calls free().
// */
//int* getConcatenation(int* nums, int numsSize, int* returnSize) {
//
//    *returnSize = 2 * numsSize;
//    int* ans = (int*)malloc(sizeof(int) * (*returnSize));
//    for (int i = 0; i < numsSize; i++)
//    {
//        ans[i] = nums[i];
//        ans[i + numsSize] = nums[i];
//    }
//    return ans;
//}

//malloc模拟开辟二维数组
//#include<stdio.h>
//#include<stdlib.h>
//struct S{
//	int age;
//	int arr[];
//}stu;
//int main()
//{
//	int * pa = (int*)malloc(sizeof(stu.age) + sizeof(int) * 5 * 3);
//	if (pa == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	int (*par)[5] = (int (*)[5]) & (stu.arr);
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			par[i][j] = j + 1;
//			printf("%d ", par[i][j]);
//		}
//		printf("\n");
//	}
//	free(pa);
//	pa = NULL;
//	return 0;
//}

//练习体会malloc、calloc、realloc、free的使用
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int* p1 = (int*)malloc(sizeof(int) * 10);
//	if (p1 == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	int* p2 = (int*)realloc(p1, sizeof(int) * 15);
//	if (p2 == NULL)
//	{
//		free(p1);
//		perror("realloc");
//		return 2;
//	}
//	p1 = p2;
//	for (int i = 0; i < 15; i++)
//	{
//		*(p1 + i) = i + 1;
//	}
//	free(p1);
//	p1 = NULL;
//	p1 = (int*)calloc(10, sizeof(int));
//	free(p1);
//	p1 = NULL;
//}