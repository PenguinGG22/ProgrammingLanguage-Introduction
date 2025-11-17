#include <stdio.h>

int main()
{
	int i = 10;
	int* j = &i;
	int* k;

	/* Assign to what j points to: */
	*j = 20; /* Now i is 20. */
	printf("Value at *j = %d \n", *j);
	printf("Value i = %d \n", i);
	printf("Address at j = %p \n", j);

	/* Assign j to k: */
	k = j; /* Now k points to i too. */
	printf("Address at k = %p \n", k);

	/* Assign to what j points to: */
	*j = *k + i; /* Now i is 40. */
	printf("Value at *j = %d \n", *j);
	printf("Value at *k = %d \n", *k);
	printf("Value i = %d \n", i);

	return 0;
}