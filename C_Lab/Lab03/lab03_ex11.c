#include <stdio.h>

int main()
{
    int n1 = 0, n2 = 0, max = 0, min = 0;

    printf("Enter two integers: ");
    scanf_s("%d %d", &n1, &n2);

    (n1 > n2) ? (max = n1, min = n2) : (max = n2, min = n1);

    printf("\n>> Larger number (max) = %d, Smaller number (min) = %d\n", max, min);
    printf("\n>> Larger number / Smaller number = %d\n", max / min);
    printf(">> Larger number %% Smaller number = %d\n", max % min);

    return 0;
}
