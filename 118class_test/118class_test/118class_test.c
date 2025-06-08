#define _CRT_SECURE_NO_WARNINGS 

//找出第一个只出现一次的字符
///**
// * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
// *
// *
// * @param str string字符串
// * @return int整型
// */
//int FirstNotRepeatingChar(char* str) {
//    // write code here
//    int arr[128] = { 0 };
//    size_t len = strlen(str);
//    for (int i = 0; i < len; i++)
//    {
//        arr[str[i]]++;
//    }
//    for (int j = 0; j < len; j++)
//    {
//        if (arr[str[j]] == 1)
//            return j;
//    }
//    return -1;
//}