#include <stdio.h>

int main(){
    int n, m;

    printf("두 개의 정수 입력 : ");
    scanf("%d %d", &n, &m);
    int max = n > m ? n : m;
    int min = n < m ? n : m;

    printf("%d - %d = %d", max, min, max - min);

    return 0;
}