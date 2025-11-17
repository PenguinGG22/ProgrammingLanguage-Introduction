#include <stdio.h>    // printf function
#include <math.h>     // sin function

#define PI 3.141592

int main()
{
    int degree;      // Variable for degrees
    double radian;   // Variable for radians

    for (degree = 0; degree <= 180; degree += 30)
    {
        radian = (PI * degree) / 180; // Convert degree to radian
        printf("sin(%d) = %.5lf \n", degree, sin(radian));
    }

    return 0;
}
