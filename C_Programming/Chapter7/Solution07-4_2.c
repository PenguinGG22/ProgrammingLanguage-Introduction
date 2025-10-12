#include <stdio.h>

int main(){
    int N;

    printf("팩토리얼 정수 입력 : ");
    scanf("%d", &N);

    int fac = 1;
    for(int i = 1; i <= N; i++){
        fac *= i;
    }
    printf("%d", fac);

    return 0;
}