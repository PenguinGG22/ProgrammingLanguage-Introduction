#include <stdio.h>

int main(){
    int arr[10] = {0};
    int fidx = 0;
    int bidx = 9;
    printf("총 10개의 숫자 입력\n");
    for(int i = 0; i < 10; i++){
        int num = 0;
        printf("입력: ");
        scanf("%d", &num);

        if(num % 2 == 0){
            arr[bidx--] = num;
        }
        else{
            arr[fidx++] = num;
        }
    }

    printf("배열 요소의 출력: ");
    for(int i = 0; i < 10; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}