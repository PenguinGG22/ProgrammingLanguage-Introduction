#include <stdio.h>
#define SIZE 5

int main()
{
	int quiz[SIZE];
	int i, count, sum;
	double ave;

	printf("Please enter %d scores.\n\n", SIZE);
	for (i = 0; i < SIZE; i++)
	{
		printf("Score %d? ", i + 1);
		scanf("%d", (quiz + i));
	}
	
	sum = 0;
	for (i = 0; i < SIZE; i++)
		sum = sum + *(quiz + i);		// sum = sum + quiz[i];

	ave = (double)sum / SIZE;
	count = 0;
	for (i = 0; i < SIZE; i++)
		if (*(quiz + i) < ave) 		// if (quiz[i] < ave)
			count++;

	printf("\n===============\n");
	printf("Average: %.1lf\n", ave);
	printf("Below average: %d students\n", count);
	printf("===============\n");

	return 0;
}
