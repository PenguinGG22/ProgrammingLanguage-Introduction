#include <stdio.h>

int main(){
    int num;
    printf("Start!\n");

    for(num = 1; num < 20; num++){
        if(num % 2 == 0 || num % 3 ==0){
            continue;
        }
        printf("%d ", num);
    }
    printf("\nend!");
    
    return 0;
}