#include <stdio.h>

int main(){
    int N;

    printf("숫자 입력 : ");
    scanf("%d", &N);

    int i = 1;
    while(i < 10){
        printf("%d x %d = %d\n", N, 10 - i, N * (10 - i));
        i++;
    }

    return 0;
}