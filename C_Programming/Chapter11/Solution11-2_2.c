#include <stdio.h>

int main(){
    char str[100];
    char tmp[100];

    scanf("%s", str);

    int size = 0;
    while(str[size] != '\0'){
        size++;
    }

    for(int i = 0; i < size; i++){
        int idx = size - i - 1;
        tmp[i] = str[idx];
    }
    tmp[size] = '\0';

    printf("%s", tmp);

    return 0;
}