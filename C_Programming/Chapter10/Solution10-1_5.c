#include <stdio.h>

int main(){
    int cnt = 8;
    printf("2 ");
    printf("3 ");
    for(int i = 4; i < 100; i++){
        int isPrime = 1;
        for(int j = 2; j * j <= i; j++){
            if(i % j == 0){
                isPrime = 0;
                break;
            }
        }
        if(isPrime){
            printf("%d ", i);
            cnt--;
        }
        if(cnt == 0){
            break;
        }
    }
    return 0;
}