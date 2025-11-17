#include <stdio.h>

int find_larger();            // Function to find the larger value
int n1, n2, max;              // Variables to store numbers and the maximum value

int main()
{
    int width, height;        // Variables for width and height in main
    printf("Enter the first number? "); scanf("%d", &n1);
    printf("Enter the second number? "); scanf("%d", &n2);
    // Find the larger value between n1 and n2 and store it in max
    max = find_larger();
    printf("n1=%d, n2=%d, the larger value is %d \n", n1, n2, max);
    // In main, calculate width and height, then find the larger value again and store it in max
    width = n1 * 4;
    height = n2;
    max = find_larger();
    printf("width=%d, height=%d, the larger value is %d \n", width, height, max);

    return 0;
}
// Function to return the larger value between n1 and n2
int find_larger()
{
    if (n1 > n2)
        return n1;
    else
        return n2;
}
