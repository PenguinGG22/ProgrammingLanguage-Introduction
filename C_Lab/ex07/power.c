#include "mymath.h"

int power(int base, int exp)
{
	int result = 1;
	int i;
	for (i = 1; i <= exp; ++i)
	{
		result *= base;
	}
	return result;
}