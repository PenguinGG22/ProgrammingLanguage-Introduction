#include<stdio.h>
int fact2(int n); /* Function Definition */

void main()
{
	int num, res;
	printf("Enter positive integer: ");
	scanf_s("%d", &num);
	res = fact2(num); /* Normal Function Call */
	printf("%d! = %d", num, res);
}
int fact2(int n) /* Function Definition */
{
	int f = 1;
	if (n <= 0) {
		return(1);
	} else {
		// Recursive Function Call as fact() calls itself
		f = n * fact2(n - 1);
		return(f);
	}
}
