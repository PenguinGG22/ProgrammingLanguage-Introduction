#include <stdio.h>

int main(){
    int N = 0;

    printf("상수 n 입력 : ");
    scanf("%d", &N);

    int k = 0;
    int exp = 2;
    while(exp <= N){
        exp *= 2;
        k++;
    }
    printf("%d", k);

    return 0;
}