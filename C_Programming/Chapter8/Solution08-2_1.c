#include <stdio.h>

int main(){
    for(int num = 2; num < 9; num += 2){
        int i = 1;
        while(1){
            printf("%d x %d = %d\n", num, i, num * i);
            i++;
            if(i > num){
                break;
            }
        }
    }
    return 0;
}