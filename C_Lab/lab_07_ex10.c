#include <stdio.h>
#include <stdlib.h>    // Required for the rand function

int main()
{
    int i, random;

    for (i = 1; i <= 5; i++)
    {
        random = rand(); // Generate a random value
        printf("%dth random number: %5d \n", i, random);
    }

    return 0;
}
