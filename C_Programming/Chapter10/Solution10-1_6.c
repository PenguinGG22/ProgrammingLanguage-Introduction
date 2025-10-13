#include <stdio.h>

int main(){
    int N = 0;

    printf("초(second) 입력 : ");
    scanf("%d", &N);

    int hour = N / 3600;
    N = N - 3600 * hour;
    int minute = N / 60;
    N = N - 60 * minute;
    int second = N;

    printf("[h:%d, m:%d, s:%d]", hour, minute, second);
    
    return 0;
}