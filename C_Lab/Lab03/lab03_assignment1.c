#include <stdio.h>

int main(){
    int num;
    printf("Input any number : ");
    scanf("%d", &num);

    if((num & 1) == 0) printf("%d is even number", num);
    else printf("%d is odd number", num);

    return 0;
}

/*
1. 규칙찾기
0010 : 2
0100 : 4
0110 : 6
1000 : 8
1010 : 10
1100 : 12
1110 : 14
-> LSB가 1이면 odd, 0이면 even

2. 틀린부분 피드백
-> if (num && 1 == 0)

& : 비트연산자
&& : 논리연산자
---
연산자 우선순위 
산술 -> 비트 시프트 -> 논리 -> 비트 -> 논리 -> 대입
*/