#include <stdio.h>

int main(){
    char str[100];

    scanf("%s", str);
    for(int i = 0; i < 100; i++){
        if(str[i] == '\0'){
            printf("%d", i);
            break;
        }
    }

    return 0;
}