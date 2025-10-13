#include <stdio.h>

int recursive(int N, int result){
    if(N <= 0){
        return result;
    }
    result *= 2;
    recursive(N - 1, result);
}

int main(){
    int N = 0;
    int result = 1;

    printf("정수 입력 : ");
    scanf("%d", &N);

    printf("2의 %d승은 %d", N, recursive(N, result));

    return 0;
}