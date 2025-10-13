#include <stdio.h>

int main(){
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int *ptr1 = arr;
    int *ptr2 = &arr[5];

    int sum = 0;
    for(int i = 1; i <= 3; i++){
        int tmp = *(ptr1);
        *(ptr1) = *(ptr2);
        *(ptr2) = tmp;

        ptr1 += i;
        ptr2 -= i;
    }

    for(int i = 0; i < 6; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}