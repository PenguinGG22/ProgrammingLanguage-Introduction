#include <stdio.h>

int main(){
    int num = 0;
    printf("10진수 정수 입력: ");
    scanf("%d", &num);

    int arr[100] = {0};
    int len = 0;
    for(int i = 0; num > 0; i++){
        arr[i] = num % 2;
        num /= 2;
        len++;
    }

    for(int i = len - 1; i >= 0; i--){
        printf("%d", arr[i]);
    }

    return 0;
}