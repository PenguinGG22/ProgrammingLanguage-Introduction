#include <stdio.h>

extern double x;
extern void func();

int main()
{
    func();
    printf("x = %lf\n", x); /* Try to uses "static double x" */
    return 0;
}
