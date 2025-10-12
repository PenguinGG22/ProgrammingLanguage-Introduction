#include <stdio.h>

int main(){
    int total = 0;
    int i, num;
    printf("0부터 num까지의 덧셈, num은? ");
    scanf("%d", &num);

    for(int i = 0; i < num + 1; i++)
        total += i;
    
    printf("0부터 %d까지의 덧셈결과 : %d", num, total);
    
    return 0;
}