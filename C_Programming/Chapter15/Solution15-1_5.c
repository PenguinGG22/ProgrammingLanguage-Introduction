#include <stdio.h>

void BubbleSort(int ary[], int len);

int main(){
    int arr[7] = {0};
    for(int i = 0; i < 7; i++){
        printf("입력: ");
        scanf("%d", &arr[i]);
    }

    BubbleSort(arr, sizeof(arr)/sizeof(int));
    for(int i = 0; i < 7; i++){
        printf("%d ", arr[i]);
    }
 
    return 0;
}

void BubbleSort(int ary[], int len){
    int temp;
    for(int i = 0; i < len - 1; i++){
        for(int j = 0; j < (len - i) - 1; j++){
            if(ary[j] < ary[j + 1]){
                temp = ary[j];
                ary[j] = ary[j + 1];
                ary[j + 1] = temp;
            }
        }
    }
}