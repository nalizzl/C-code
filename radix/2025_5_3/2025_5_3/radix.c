#define _CRT_SECURE_NO_WARNINGS
//����1
//#include<stdio.h>
//int main()//�ϰ�����֧�ֱ䳤���顣������
//{
//    int a, b, c;
//    scanf("%d", &a);
//    if (a % 2 == 0)
//    {
//        printf("��������");
//        return 0;
//    }
//    int arr[a] = { 0 };
//    for (b = 0, c = 0; b <= a; b++)
//    {
//        scanf("%d", arr[b]);
//        c ^= arr[b];
//    }
//    printf("%d", c);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int b, c;
//    int arr[9] = { 0 };
//    for (b = 0, c = 0; b < 9; b++)
//    {
//        scanf("%d", &arr[b]);
//        c = c ^ arr[b];
//    }
//    printf("%d", c);
//    return 0;
//}
//����������������������ʱ������
//#include<stdio.h>
//int main()
//{
//    int a, b;
//    scanf("%d%d", &a, &b);
//    a ^= b;
//    b ^= a;
//    a ^= b;
//    printf("%d %d", a, b);
//    return 0;
//}
//ͳ��n����1������ţ�ͣ�
/**
 * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
 *
 *
 * @param n int����
 * @return int����
 */
 //int NumberOf1(int n) {
 //    // write code here
 //    int count = 0;
 //    scanf("%d", &n);
 //    while(n)
 //    {
 //        n &= (n - 1);
 //        count++;
 //    }
 //    return count;
 //}