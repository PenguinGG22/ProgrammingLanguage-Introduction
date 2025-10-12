#include <stdio.h>

int main(){
    int N = 1;
    int sum = 0;

    while(N != 0){
        printf("양의 정수 입력 : ");
        scanf("%d", &N);
        sum += N;
    }

    printf("합 : %d", sum);
    
    return 0;
}