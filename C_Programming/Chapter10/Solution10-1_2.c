#include <stdio.h>

int main(){
    int N, M;
    printf("두 개의 인자 입력 : ");
    scanf("%d %d", &N, &M);
    int max = N > M ? N : M;
    int min = N < M ? N : M;
    for(int i = min; i <= max; i++){
        for(int j = 1; j <= 9; j++){
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }

    return 0;
}