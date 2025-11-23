#include <stdio.h>

int main(){
    char str[100] = "";
    char tmp[100] = "";
    char substr[100] = "";

    int idx, tidx, sublen, cnt;

    printf("Input a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Input substring: ");
    scanf("%s", substr);

    idx = 0;
    tidx = 0;
    while(str[idx] != '\0'){
        if(str[idx] >= 'a' && str[idx] <= 'z'){
            tmp[tidx++] = str[idx] - 'a' + 'A';
        }
        else if(str[idx] == ' ' || str[idx] >= 'A' && str[idx] <= 'Z'){
            tmp[tidx++] = str[idx];
        }
        else{
            tmp[tidx++] = ' ';
        }
        idx++;
    }
    tmp[tidx] = '\0';

    idx = 0;
    while(substr[idx] != '\0'){
        if(substr[idx] >= 'a' && substr[idx] <= 'z'){
            substr[idx] = substr[idx] - 'a' + 'A';
        }
        idx++;
    }
    sublen = idx;

    idx = 0;
    cnt = 0;
    while(tmp[idx] != '\0'){
        if(tmp[idx] == *substr){
            int isNotequal = 0;
            for(int i = 0; i < sublen; i++){
                isNotequal += (tmp[idx + i] != *(substr + i));
            }
            if(isNotequal == 0){
                cnt++;

                while(tmp[idx] != ' ' && tmp[idx] != '\0'){
                    idx++;
                }
                if(tmp[idx] == '\0') break;
            }
        }
        idx++;
    }
    printf("Output: %d", cnt);

    return 0;
}