#include <stdio.h>

int main(){
    int N;

    printf("양의 정수 입력 : ");
    scanf("%d", &N);

    int i = 1;
    while(N--){
        printf("%d\n", i * 3);
        i++;
    }
    
    return 0;
}