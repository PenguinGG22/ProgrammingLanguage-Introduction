#include <stdio.h>

int main() {

	int  var1 = 1206;
	char var2[10] = {0,};

	// %u: Unsigned decimal integer, %p: Hexadecimal pointer
	printf("Address of var1 variable: %p\n", &var1);
	printf("Address of var2 variable: %p\n", &var2);

	printf("Address of var1 variable: %u\n", &var1);
	printf("Address of var2 variable: %u\n", &var2);

	return 0;
}