#include <stdio.h>

int main (){ 
    char str[100] = "";
    char *idx = str;

    int cnt, len;
    printf("Input a string: ");
    fgets(str, sizeof(str), stdin);
    
    cnt = 1, len = 0;
    while(*idx != '\0'){
        if(*idx == ' ' || *idx == '\n'){
            if(len > 0){
                printf(" (length: %d)\n", len);
                len = 0;
                cnt++;
            }
        }
        else{
            if(len == 0){
                printf("Word %d: ", cnt);
            }
            printf("%c", *idx);
            len++;
        }
        idx++;
    }

    return 0;
}