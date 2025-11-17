#include <stdio.h>

double calculate_average(int arr[], int size)
{
	double sum = 0;
    if (size == 0) // Handle empty array
		return 0;
	else {
		for (int i = 0; i < size; i++) {
			sum += arr[i];
		}
	    return sum / size;
	}
}

int main() {
    int array1[] = {10, 20, 30, 40, 50}; // 5 elements
    int array2[] = {5, 15, 25};          // 3 elements

    int size1 = sizeof(array1) / sizeof(array1[0]);
    int size2 = sizeof(array2) / sizeof(array2[0]);

    double average1 = calculate_average(array1, size1);
    double average2 = calculate_average(array2, size2);

    printf("Average of array1: %.2lf\n", average1);
    printf("Average of array2: %.2lf\n", average2);

    return 0;
}
