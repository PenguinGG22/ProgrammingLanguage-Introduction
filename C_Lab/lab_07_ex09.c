#include <stdio.h>

int addition(int n);

int main()
{
    int n;
    printf("Calculate the sum of numbers from 1 to n. What is n? ");
    scanf_s("%d", &n);
    printf("The sum of numbers from 1 to %d is %d.", n, addition(n));

    return 0;
}

// Function to calculate the sum of numbers from 1 to n
int addition(int n)
{
    int result;
    if (n > 1)
        result = addition(n - 1) + n;
    else
        result = 1;

    return result;
}
