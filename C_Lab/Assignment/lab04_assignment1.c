#include <stdio.h>

int main(){
    int N;
    int sum = 1;
    printf("Input any number: ");
    scanf("%d", &N);
    
    for(int i = 1; i <= N; i++)
        sum *= i;

    printf("The factorial of %d: %d", N, sum);
    return 0;
}