#define _CRT_SECURE_NO_WARNINGS 
//ţ���ж�������
//#include <stdio.h>
//int main() {
//    int a, b, c;
//    while (scanf("%d %d %d", &a, &b, &c) != EOF) { // ע�� while ������ case
//        // 64 λ������� printf("%lld") to 
//        if (a + b <= c || a + c <= b || b + c <= a)
//        {
//            printf("Not a triangle!\n");
//        }
//        else
//        {
//            if (a == b && a == c)
//            {
//                printf("Equilateral triangle!\n");
//            }
//            else if ((a == b && a != c) || (a == c && a != b) || (b == c && b != a))
//            {
//                printf("Isosceles triangle!\n");
//            }
//            else
//            {
//                printf("Ordinary triangle!\n");
//            }
//        }
//    }
//    return 0;
//}