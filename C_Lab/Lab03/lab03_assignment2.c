#include <stdio.h>

int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    int sum = 0;
    for(int i = 1; i < num; i++){
        if(num % i == 0) sum += i;
    }
    if(num == sum) printf("%d is a perfect number.", num);
    else printf("%d is not a perfect number.", num);

    return 0;
}

/*
1. 규칙찾기
28 -> 1 + 2 + 4 + 7 + 14 = 28 (완전수)
20 -> 1 + 2 + 4 + 5 + 10 = 22 (불완전수)
*/