#include <stdio.h>

#define SIZE 5

int main(){
    int arr[SIZE] = {0};

    printf("Input array elements: ");
    for(int i = 0; i < SIZE; i++){
        scanf("%d", arr + i);
    }

    int sum = 0;
    for(int i = 0; i < SIZE; i++){
        sum += *(arr + i);
    }
    printf("Sum of array elements: %d", sum);

    return 0;
}