#include <stdio.h>

int main() {

	int a;
	float b;

	// scanf example
	printf("Enter a number(int): ");
	scanf("%d", &a);
	printf("Enter a number(float): ");
	scanf("%f", &b);

	// printf example
	printf("printf test:\n");
	printf("The int variable: %d \n", a);
	printf("The float variable: %f \n", b);

	return 0;
}
