#include <stdio.h>

void swap_value(int x, int y); 		// Function declaration for swapping by value
void swap_address(int* x, int* y);	// Function declaration for swapping by address

int main()
{
	int x = 100, y = 200;
	printf("In main: x=%d, y=%d \n\n", x, y);

	swap_value(x, y);			// Call by value: x and y are passed by value
	printf("In main: x=%d, y=%d (after swap_value(x, y) call)\n\n", x, y);
	swap_address(&x, &y); 		// Call by address: x and y are passed by address
	printf("In main: x=%d, y=%d (after swap_address(&x, &y) call)\n\n", x, y);

	return 0;
}

// Function to attempt swapping x and y by value, but actual values in main remain unchanged
void swap_value(int x, int y)
{
	int temp;					// Temporary variable declaration
	temp = x;
	x = y;
	y = temp;
	printf("In swap_value: x=%d, y=%d \n", x, y);
}

// Function to swap x and y by using pointers, effectively changing values in main
void swap_address(int* x, int* y) // A function using pointers to swap x and y
{
	int temp; 					// Temporary variable declaration
	temp = *x; 					// Store the value pointed by x into temp
	*x = *y; 					// Assign the value pointed by y to the value pointed by x
	*y = temp;					// Assign the value of temp to the value pointed by y
	printf("In swap_address: *x=%d, *y=%d \n", *x, *y);
}
