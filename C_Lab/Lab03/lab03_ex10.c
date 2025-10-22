// C program to demonstrate explicit type casting
#include<stdio.h>

int main()
{
	double x = 1.2;

	// Explicit conversion from double to int
	int sum = (int)x + 1;
	float sum_2 = (float)sum + 3.0; // 5.0 = 2.0 + 3.0


	printf("sum = %d\n", sum);
	printf("sum_2 = %f", sum_2);

	return 0;
}