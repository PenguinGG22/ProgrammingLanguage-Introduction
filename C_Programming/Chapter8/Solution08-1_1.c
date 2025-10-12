#include <stdio.h>

int main(){
    int num;
    for(num = 1; num < 100; num++){
        if(num % 7 == 0 && num % 9 == 0){
            printf("7의 배수이면서 9의배수 : %d \n", num);
        }
        else if(num % 7 == 0){
            printf("7의 배수 : %d \n", num);
        }
        else if(num % 9 ==0){
            printf("9의 배수 : %d \n", num);
        }
    }
    return 0;
}