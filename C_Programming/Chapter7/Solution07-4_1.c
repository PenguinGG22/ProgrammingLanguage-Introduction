#include <stdio.h>

int main(){
    int cur, is;

    printf("두 정수 입력 : ");
    scanf("%d %d", &cur, &is);

    int sum = 0;
    for(; cur <= is; cur++){
        sum += cur;
    }
    printf("%d", sum);

    return 0;
}