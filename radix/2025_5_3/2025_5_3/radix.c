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
// 
// 
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

//��������������λ�������
//#include <stdio.h>
//int main() {
//    int a, b, count = 0;
//    while (scanf("%d %d", &a, &b) != EOF) { // ע�� while ������ case
//        // 64 λ������� printf("%lld") to 
//        int tmp = a ^ b;//����Ϊ1������ͬλת��Ϊ��һ�ĸ���
//        while (tmp)
//        {
//            tmp &= (tmp - 1);
//            count++;
//        }
//        printf("%d\n", count);
//    }
//    return 0;
//}

//��ȡһ�����������Ƶ�����λ��ż��λ������ӡ������
//#include<stdio.h>
//int main()
//{
//	int a, b, i, num, flag;
//	int arr1[16] = { 0 };
//	int arr2[16] = { 0 };
//	scanf("%d", &num);
//	for (a = 0, b = 0, i = 0; i < 32; i++)
//	{
//		flag = num & (1 << i);
//		if ((i + 1) % 2 == 1)
//		{
//			if (flag == 0)
//				arr1[a] = 0;
//			else
//				arr1[a] = 1;
//			a++;
//		}
//		else
//		{
//			if (flag == 0)
//				arr2[b] = 0;
//			else
//				arr2[b] = 1;
//			b++;
//		}
//	}
//	printf("��������Ϊ��\n");
//	for (a = 15; a >= 0; a--)
//	{
//		printf("%d ", arr1[a]);
//	}
//	printf("\nż������Ϊ��\n");
//	for (b = 15; b >= 0; b--)
//	{
//		printf("%d ", arr2[b]);
//	}
//	return 0;
//}