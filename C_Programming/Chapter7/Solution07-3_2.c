#include <stdio.h>

int main(){
    int total = 0, num = 0;

    do{
        num += 2;
        total += num;
    }while(num < 100);
    
    printf("합계 : %d", total);

    return 0;
}