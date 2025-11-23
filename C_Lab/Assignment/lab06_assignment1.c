#include <stdio.h>

int main(){
    int arr[] = {7, 2, 5, 10, 4};

    for(int i = 0; i < 4; i++){
        for(int j = i + 1; j < 5; j++){
            if(arr[i] > arr[j]){
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }

    printf("Median value: %d", arr[2]);
    return 0;
}