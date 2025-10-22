#include <stdio.h>
#define N 5

int main()
{
	int f[N] = { 3, 0, -30, -20, -1 };
	int i, min;

	min = f[0];
	for (i = 1; i < N; i++)
	{
		if (f[i] < min)
			min = f[i];
	}
	printf("List of freezing points:");
	for (i = 0; i < N; i++)
		printf("%4d", f[i]);
	printf("\nThe lowest freezing point: %d \n", min);

	return 0;
}