#include <stdio.h>

int main() {
	int i = 0;

	printf("Enter the number (i): ");
	scanf("%d", &i);

	if (i < 15)
		printf("%d is less than 15\n", i);
	else
		printf("%d is equal to or greater than 15\n", i);

	return 0;
}