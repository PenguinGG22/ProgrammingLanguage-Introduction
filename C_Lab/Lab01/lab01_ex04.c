#include <stdio.h>
int main()
{
	unsigned char age = 97;
	int max = 2147483647; // int range: (-2^31) ~ (2^31 - 1)
	int max_plus_1 = max + 1; // this line makes overflow!!
	unsigned int super = max + 1; // unsigned int range: 0 ~ (2^32 - 1)

	printf("age = %d\nmax = %d\n", age, max);
	printf("max+1 = %d\n", max_plus_1);
	printf("super = max+1 = %u\n", super);

	return 0;
}
