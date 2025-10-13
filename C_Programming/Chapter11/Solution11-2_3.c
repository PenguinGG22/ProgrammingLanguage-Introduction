#include <stdio.h>

int main(){
    char str[100];
    scanf("%s", str);

    int idx = 0;
    char max = 0;
    while(str[idx] != '\0'){
        if(str[idx] > max){
            max = str[idx];
        }
        idx++;
    }
    printf("%d", max);

    return 0;
}