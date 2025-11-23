// C program to illustrate nested-if statement
#include <stdio.h>

int main() {

	int i = 0;

	printf("Enter the number (i): ");
	scanf("%d", &i);

	if (i == 10)
		printf("i is 10");
	else if (i == 15)
		printf("i is 15");
	else if (i == 20)
		printf("i is 20");
	else
		printf("i is not present");

	return 0;
}