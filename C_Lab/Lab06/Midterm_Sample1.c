#include <stdio.h>

int xmas;
int main() {
    extern int xmas;

    if(xmas==0) {
        printf("Chirstmas is coming!\n");
    }
    
    return 0;
}