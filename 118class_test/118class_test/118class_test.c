#define _CRT_SECURE_NO_WARNINGS 

//�ҳ���һ��ֻ����һ�ε��ַ�
///**
// * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
// *
// *
// * @param str string�ַ���
// * @return int����
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