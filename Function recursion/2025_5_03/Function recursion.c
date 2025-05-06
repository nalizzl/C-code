#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//    printf("hello world\n");
//    main();//main函数中调用了main函数
//    return 0;
//}
//#include <stdio.h>
//long long int Fact(long long int n)
//{
//    if (n == 0)
//        return 1;
//    else
//        return n * Fact(n - 1);
//}
//long long int main()
//{
//    long long int n = 0;
//    scanf("%lld", &n);
//    long long int ret = Fact(n);
//    printf("%lld\n", ret);
//    return 0;
//}

//#include <stdio.h>
//int Fib(int n)
//{
//    if (n <= 2)
//        return 1;
//    else
//        return Fib(n - 1) + Fib(n - 2);
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int ret = Fib(n);
//    printf("%d\n", ret);
//    return 0;
//}
#include <stdio.h>
int Fib(int n)
{
    int a = 1;
    int b = 1;
    int c = 1;
    while (n > 2)
    {
        c = a + b;
        a = b;
        b = c;
        n--;
    }
    return c;
}
int main()
{
    int n = 0;
    scanf("%d", &n);
    int ret = Fib(n);
    printf("%d\n", ret);
    return 0;
}