#if 0

#include <stdio.h>
int main() {

	char str[100];

	printf("Enter a value :");
	//gets ( str )
	fgets(str, 100, stdin);

	printf("\nYou entered: ");
	puts(str);

	return 0;
}
#endif