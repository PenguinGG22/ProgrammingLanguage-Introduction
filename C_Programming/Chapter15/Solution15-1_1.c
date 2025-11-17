#include <stdio.h>

int main(){
    int arr[10] = {0};
    for(int i = 0; i < 10; i++){
        printf("입력: ");
        scanf("%d", &arr[i]);
    }

    printf("홀수 출력: ");
    for(int i = 0; i < 10; i++){
        if(arr[i] % 2 == 1) printf(" %d ", arr[i]);
    }
    printf("\n");

    printf("짝수 출력: ");
    for(int i = 0; i < 10; i++){
        if(arr[i] % 2 == 0) printf(" %d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}