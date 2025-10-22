#include<stdio.h>

int main()
{
    int x = 12, y = 1, z = 1;
    printf("Initial value of x = %d\n", x); // print the initial value of x
    printf("Initial value of y = %d\n", y); // print the initial value of y
    printf("Initial value of z = %d\n\n", z); // print the initial value of z

    y = ++x; // increment the value of x by 1 then assign this new value to y
    printf("After incrementing by 1: x = %d\n", x);
    printf("[pre] y = %d\n\n", y);

    x = 12; // re-init

    z = x++; // use the current value of x then increment it by 1
    printf("After incrementing by 1: x = %d\n", x);
    printf("[post] z = %d\n\n", z);

    x = 12; // re-init

    y = --x; // decrement the value of x by 1 then assign this new value to y
    printf("After decrementing by 1: x = %d\n", x);
    printf("[pre] y = %d\n\n", y);

    x = 12; // re-init

    z = x--; // use the current value of x then decrement it by 1
    printf("After decrementing by 1: x = %d\n", x);
    printf("[post] z = %d\n\n", z);

    return 0;
}