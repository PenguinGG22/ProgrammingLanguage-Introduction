#include <stdio.h>

int main() {

    int a = 20;
    int b = 10;
    int c = 15;
    int d = 5;
    int e = 0;

    // initial values
    printf("a = %d, b = %d, c = %d, d = %d, e = %d \n", a, b, c, d, e);
    printf("========================\n");

    e = (a + b) * c / d;      // ( 30 * 15 ) / 5
    printf("Value of (a + b) * c / d is : %d\n", e);

    e = ((a + b) * c) / d;    // (30 * 15 ) / 5
    printf("Value of ((a + b) * c) / d is  : %d\n", e);

    e = (a + b) * (c / d);   // (30) * (15/5)
    printf("Value of (a + b) * (c / d) is  : %d\n", e);

    e = a + (b * c) / d;     //  20 + (150/5)
    printf("Value of a + (b * c) / d is  : %d\n", e);

    return 0;
}
