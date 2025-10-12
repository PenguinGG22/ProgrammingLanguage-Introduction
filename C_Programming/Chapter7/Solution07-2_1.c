#include <stdio.h>

int main(){
    int num = 5;
    int sum = 0;
    while(num--){
        int i;
        printf("숫자 입력 : ");
        scanf("%d", &i);
        if(i <= 0){
            num++;
        }
        else{
            sum += i;
        }
    }
    printf("합 : %d", sum);
    return 0;
}