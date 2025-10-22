#include <stdio.h>

#define STR(A, B) #A " is a member of " #B
//#define STR(A, B) "A is a member of B."

int main()
{
	puts(STR(Young-sook, I am SOLO));
	puts(STR(Minji, NewJeans));
	puts(STR(Jangwon, SKKU));

	return 0;
}