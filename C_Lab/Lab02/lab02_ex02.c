#include <stdio.h>

int main()
{
    int n = 123;

    // flags
    printf("%d, %+d, %+d\n", 10, 10, -10);
    printf("======================\n");
    // flags + width
    printf("n=%d\n", n);
    printf("n=%5d\n", n);
    printf("n=%+5d\n", n);
    printf("n=%-5d\n", n);
    printf("n=%-+5d\n", n);
    printf("======================\n");
    // precision
    printf("%.2f, %0.f\n", 1.141, 1.141);
    printf("%.2e, %0.e\n", 1.141, 100.00);
    printf("%.4s\n", "hello");
    printf("%.1s\n", "hello");
    printf("======================\n");

    return 0;
}