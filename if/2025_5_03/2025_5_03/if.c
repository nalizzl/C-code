#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//    int i = 0;
//    for (i = 1; i <= 100; i++)
//    {
//        if(i % 3 == 0)
//            printf("%d\n", i);
//    }
//    return 0;
//}

#include<stdio.h>
int main()
{
    int a, b, c;
    scanf("%d%d%d",&a,&b,&c);
    if (a >= b && a >= c)
    {
        if (b >= c)
        {
            printf("%d %d %d", a, b, c);
        }
        else
            printf("%d %d %d", a, c, b);
        return 0;
    }
    if (b >= a && b >= c)
    {
        if (a >= c)
        {
            printf("%d %d %d", b, a, c);
        }
        else
            printf("%d %d %d", b, c, a);
        return 0;
    }
    if (c >= a && c >= b)
    {
        if (a >= b)
        {
            printf("%d %d %d", c, a, b);
        }
        else
            printf("%d %d %d", c, b, a);
        return 0;
    }
}