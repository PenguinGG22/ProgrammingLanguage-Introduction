#include <stdio.h>
#include <string.h>

int main() {
	char str1[14];
	strcpy(str1, "hello ");
	printf("%s\n", str1);

	char str2[7];
	strcpy(str2, "world!");
	printf("%s\n", str2);

	strcat(str1, str2);
	printf("%s\n", str1);

	return 0;
}