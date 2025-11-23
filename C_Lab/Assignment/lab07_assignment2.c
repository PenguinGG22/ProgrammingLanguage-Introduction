#include <stdio.h>

double calculate_expression(double a, double b, double c, double k) {
    return (a * b) / k + (b * c) / (k + 1) + (c * a) / (k + 2);
}

int main() {
    double x, y, z, k;
    double result;

    printf("Enter 4 numbers for x, y, z and k (k should not be -1 or -2) (double):\n");
    scanf("%lf %lf %lf %lf", &x, &y, &z, &k);

    while (k == -1 || k == -2) {
        printf("Error: k cannot be -1 or -2. Please enter a valid value for k again: ");
        scanf("%lf", &k);
    }

    if (k == 0) {
        printf("Error: k cannot be 0. Division by zero is not allowed.\n");
        return 1;
    }

    result = calculate_expression(x, y, z, k);

    printf("The output of your program: %.2f\n", result);

    return 0;
}
