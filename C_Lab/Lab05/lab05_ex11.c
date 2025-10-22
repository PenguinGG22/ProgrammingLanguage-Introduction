#include <stdio.h>

#define DATE(Y, M, D) Y ## M ## D

int main()
{
	printf("Date of birth : %d\n", DATE(11, 06, 10));
	printf("Date of birth : %d\n", DATE(10, 11, 25));

	return 0;
}