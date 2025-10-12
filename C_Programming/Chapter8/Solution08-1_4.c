#include <stdio.h>

int main(){
    int n, m;

    printf("두 개의 정수 입력 : ");
    scanf("%d %d", &n, &m);
    int max, min;
    if(n > m){
        max = n;
        min = m;
    }
    else{
        max = m;
        min = n;
    }
    
    printf("%d - %d = %d", max, min, max - min);

    return 0;
}