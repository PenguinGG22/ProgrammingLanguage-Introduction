
#include <stdio.h>

#define DEBUG 1

int main() {

#if DEBUG
	printf("DEBUG!!!!\n");
#else
	printf("Hello World\n");
#endif
	return 0;

}