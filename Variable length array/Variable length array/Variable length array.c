#define _CRT_SECURE_NO_WARNINGS 
//��ӡ"X"��ͼ��
// ����ʹ�ñ䳤����Ĳ��԰汾
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    int a, b, c, d;
//    char arr[6];
//    for (b = 0, c = 5 - 1; b < 5;)
//    {
//        memset(arr, 0, sizeof(arr));//���ڳ�ʼ������
//        arr[b] = '*';
//        arr[c] = '*';
//        for (d = 0; d < 5; d++)
//        {
//            if (arr[d] == '*')
//            {
//                printf("%c", arr[d]);
//            }
//            else
//            {
//                printf(" ");
//            }
//        }
//        printf("\n");
//        b++;
//        c--;
//    }
//	return 0;
//}
//ţ�����Ͽ���ʹ�ñ䳤����İ汾
//#include <stdio.h>
//#include <string.h>
//int main() {
//    int a, b, c, d;
//    while (scanf("%d", &a) != EOF) { // ע�� while ������ case
//        char arr[a + 1];
//        for (b = 0, c = a - 1; b < a;)
//        {
//            memset(arr, 0, sizeof(arr));//���ڳ�ʼ������
//            arr[b] = '*';
//            arr[c] = '*';
//            for (d = 0; d < a; d++)
//            {
//                if (arr[d] == '*')
//                {
//                    printf("%c", arr[d]);
//                }
//                else
//                {
//                    printf(" ");
//                }
//            }
//            printf("\n");
//            b++;
//            c--;
//        }
//    }
//    return 0;
//}
// 
//����ʮ�����������ƽ��ֵ
//#include<stdio.h>
//int main()
//{
//	int i, sum, arr[10];
//	for (i = 0, sum = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//		sum += arr[i];
//	}
//	printf("%f", sum / 10.0);
//	return 0;
//}
//
//��������
//#include<stdio.h>
//int main()
//{
//	printf("ÿ�������������ݣ��ֱ������������Ԫ�أ�Ҳ����Ҫ�����Ķ���\n");
//	int tmp, i, aa[5], bb[5];
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d%d", &aa[i], &bb[i]);
//		tmp = aa[i];
//		aa[i] = bb[i];
//		bb[i] = tmp;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", aa[i]);
//	}
//	printf("\n");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", bb[i]);
//	}
//	return 0;
//}
//
//�������
//#include <stdio.h>
//int main() {
//    int left, right, arr[10];
//    for (left = 0; left < 10; left++)
//    {
//        scanf("%d", &arr[left]);
//    }
//    for (right = 9; right >= 0; right--)
//    {
//        printf("%d ", arr[right]);
//    }
//    return 0;
//}
//
//