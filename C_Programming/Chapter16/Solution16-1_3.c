#include <stdio.h>

int main(){
    int arr[5][5] = {0};

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i = 0; i < 4; i++){
        int sum = 0;
        for(int j = 0; j < 4; j++){
            sum += arr[i][j];
        }
        arr[i][4] = sum;
        arr[4][4] += sum;
    }

    for(int i = 0; i < 4; i++){
        int sum = 0;
        for(int j = 0; j < 4; j++){
            sum += arr[j][i];
        }
        arr[4][i] = sum;
    }

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("%2d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}