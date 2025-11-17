#include<stdio.h>

int main()
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	int* ptr = arr;

	printf("%p\n", ptr);
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);

	printf("arr[2]: %d\n", arr[2]);
	printf("*(ptr+2): %d\n", *(ptr + 2));

	return 0;
}
