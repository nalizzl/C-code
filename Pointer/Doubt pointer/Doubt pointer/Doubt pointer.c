#define _CRT_SECURE_NO_WARNINGS 
//单身狗数2
//由于没有设置编译器，变长数组无法使用，故数组为固定长度
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
//			printf("%d 为单身狗数\n", arr[a]);
//		}
//	}
//	return 0;
//}
//获得月份天数
//#include <stdio.h>
////我比较笨，没什么时间想好办法，就暂时用这个最笨的办法了
//int main() {
//    int a, b;
//    while (scanf("%d %d", &a, &b) != EOF) { // 注意 while 处理多个 case
//        // 64 位输出请用 printf("%lld") to
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