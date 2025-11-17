#include <stdio.h>
#include <stdlib.h>    // Required for the rand function
#include <time.h>      // Required for the time function

int main()
{
    int i, random;

    // Use the time function to set the seed for the rand function
    // srand(2);
    srand(time(NULL));

    for (i = 1; i <= 5; i++)
    {
        random = rand(); // Generate a random value
        printf("%dth random number: %5d \n", i, random);
    }

    return 0;
}
