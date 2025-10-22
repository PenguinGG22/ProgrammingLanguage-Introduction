#include <stdio.h>
#define SIZE 5

int main()
{
	int i, repeat, temp, a[SIZE] = { 5, 14, 33, 21, 1 };

	printf("Before sorting: ");
	for (i = 0; i < SIZE; i++)
		printf("%4d", a[i]);

	for (repeat = 1; repeat < SIZE; repeat++)
	{
		for (i = 0; i < SIZE - repeat; i++)
		{
			if (a[i] > a[i + 1])
			{
				temp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = temp;
			}
		}
	}
	printf("\n\nAfter sorting: ");
	for (i = 0; i < SIZE; i++)
		printf("%4d", a[i]);
	printf("\n");

	return 0;
}
