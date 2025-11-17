#include<stdio.h>

int main()
{
	/*
	int i = 10;
	register int* a = &i;
	printf("The value of pointer : %d", *a);
	*/

	register int i = 10;
	int* a = &i;
	printf("The value of pointer : %d", *a);
	return 0;
}