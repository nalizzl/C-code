#define _CRT_SECURE_NO_WARNINGS 
//������2
//����û�����ñ��������䳤�����޷�ʹ�ã�������Ϊ�̶�����
//#include<stdio.h>
//int main()
//{
//	int a, b, c, flag, arr[10];
//	for (a = 0; a < 10; a++)
//	{
//		scanf("%d", &arr[a]);
//	}
//	for (a = 0; a < 10; a++)
//	{
//		for (b = -1, flag = 0; b < 9; b++)
//		{
//			if (b == a)
//			{
//				continue;
//			}
//			c = arr[a] ^ arr[b];
//			if (c == 0)
//			{
//				flag = 1;
//				break;
//			}
//		}
//		if (flag == 0)
//		{
//			printf("%d Ϊ������\n", arr[a]);
//		}
//	}
//	return 0;
//}
//����·�����
//#include <stdio.h>
////�ұȽϱ���ûʲôʱ����ð취������ʱ�������İ취��
//int main() {
//    int a, b;
//    while (scanf("%d %d", &a, &b) != EOF) { // ע�� while ������ case
//        // 64 λ������� printf("%lld") to
//        if (a % 100 == 0 || a % 4 == 0)
//        {
//            if (b <= 7)
//            {
//                switch (b % 2)
//                {
//                case 1:
//                    printf("31");
//                    break;
//                case 0:
//                    if (b == 2)
//                    {
//                        printf("29");
//                    }
//                    else
//                    {
//                        printf("30");
//                    }
//                }
//            }
//            else
//            {
//                switch (b % 2)
//                {
//                case 0:
//                    printf("31");
//                    break;
//                case 1:
//                    printf("30");
//                }
//            }
//        }
//        else
//        {
//            if (b <= 7)
//            {
//                switch (b % 2)
//                {
//                case 1:
//                    printf("31");
//                    break;
//                case 0:
//                    if (b == 2)
//                    {
//                        printf("28");
//                    }
//                    else
//                    {
//                        printf("30");
//                    }
//                }
//            }
//            else
//            {
//                switch (b % 2)
//                {
//                case 0:
//                    printf("31");
//                    break;
//                case 1:
//                    printf("30");
//                }
//            }
//        }
//        printf("\n");
//    }
//    return 0;
//}