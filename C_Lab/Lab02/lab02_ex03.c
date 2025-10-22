#include <stdio.h>

int main()
{
    int a = 10, b = 20, c = 30;
    int x, y, z;

    // The ordering of the arguments matters!
    printf("a=%d, b=%d, c=%d\n", a, b, c);
    printf("a=%d, b=%d, c=%d\n", c, a, b);

    printf("Entering the values:\n");
    scanf("%d, %d, %d", &x, &y, &z);
    printf("x=%d, z=%d, y=%d\n", x, z, y);
}
