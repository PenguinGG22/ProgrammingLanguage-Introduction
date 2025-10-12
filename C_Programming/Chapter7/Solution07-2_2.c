#include <stdio.h>

int main(){
    int num = 5;

    while(num--){
        int i = 4 - num;

        while(i--){
            printf("O");
        }
        
        printf("*\n");
    }

    return 0;
}