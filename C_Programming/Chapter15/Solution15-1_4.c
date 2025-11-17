#include <stdio.h>
#include <string.h>

int Palindrome(char str[], int len){
    for(int i = 0; i < len / 2; i++){
        if(str[i] != str[len - i - 1]) return 0;
    }
    return 1;
}

int main(){
    char str[100] = "";
    printf("문자열 입력: ");
    scanf("%s", str);
    
    int isTrue = Palindrome(str, strlen(str));
    if(isTrue){
        printf("회문 입니다.");
    }
    else{
        printf("회문이 아닙니다.");
    }

    return 0;
}