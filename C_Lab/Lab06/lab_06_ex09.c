#include <stdio.h>
#define M 2
#define N 3 

int main()
{
	int A[M][N], B[M][N], C[M][N];
	int i, j;

	// Array A
	printf("\nArray A Inputs\n");
	for (i = 0; i < M; i++)
		for (j = 0; j < N; j++)
		{
			printf("%dRow %dCol? ", i + 1, j + 1);
			scanf("%d", &A[i][j]);
		}
	// Array B
	printf("\nArray B Inputs \n");
	for (i = 0; i < M; i++)
		for (j = 0; j < N; j++)
		{
			printf("%dRow %dCol? ", i + 1, j + 1);
			scanf_s("%d", &B[i][j]);
		}
	// Array C = Array A + Array B
	for (i = 0; i < M; i++)
		for (j = 0; j < N; j++)
			C[i][j] = A[i][j] + B[i][j];

	// Array Outputs
	printf("\n Array A Outputs:\n");
	for (i = 0; i < M; i++)
	{
		printf(" [ ");
		for (j = 0; j < N; j++)
			printf("%2d ", A[i][j]);
		printf("] \n");
	}

	printf("\n Array B Outputs:\n");
	for (i = 0; i < M; i++)
	{
		printf(" [ ");
		for (j = 0; j < N; j++)
			printf("%2d ", B[i][j]);
		printf("] \n");
	}
	printf("\n Array C Outputs: C=A+B \n");
	for (i = 0; i < M; i++)
	{
		printf(" [ ");
		for (j = 0; j < N; j++)
			printf("%2d ", C[i][j]);
		printf("] \n");
	}

	return 0;
}
