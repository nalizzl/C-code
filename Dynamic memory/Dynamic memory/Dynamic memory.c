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