#include <stdio.h>
#include <string.h>

int main() {

    char chars[8];
    strcpy(chars, "racecar");
    char* str1 = chars;
    char* str2 = chars + 4;
    printf("%s\n", str1);
    printf("%s\n", str2);

    return 0;
}
