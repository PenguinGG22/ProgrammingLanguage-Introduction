#include <stdio.h>

int main() {
	int i = 0;

	printf("Enter the number (i): ");
	scanf("%d", &i);

	if (i < 15)
		printf("%d is less than 15\n", i);

	printf("I am Not in if");

	return 0;
}
