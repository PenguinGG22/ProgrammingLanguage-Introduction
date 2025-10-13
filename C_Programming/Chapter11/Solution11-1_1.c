#include <stdio.h>

int main(){
    int arr[5];

    for(int i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
    }

    int min = arr[0], max = arr[0], sum = 0;

    for(int i = 0; i < 5; i++){
        if(arr[i] < min) min = arr[i];
        if(arr[i] > max) max = arr[i];
        sum += arr[i];
    }

    printf("최솟값 : %d\n", min);
    printf("최대값 : %d\n", max);
    printf("평균 : %d", sum / 5);

    return 0;
}