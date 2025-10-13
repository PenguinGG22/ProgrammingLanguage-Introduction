#include <stdio.h>

int main(){
    int N, M;
    printf("두 개의 인자 입력 : ");
    scanf("%d %d", &N, &M);
    
    while(M > 0){
        int temp = M;
        M = N % M;
        N = temp;
    }
    printf("GCD : %d", N);

    return 0;
}