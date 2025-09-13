#include <stdio.h>

int main(){
    int a = 1;
    char b = '6';
    double c = 3.14;

    printf("Hello! I am a character."
        "My value is %c and my size is %lu byte.\n",
         b, sizeof(char));

    printf("Hello! I am a integer."
        "My value is %d and my size is %lu byte.\n",
         a, sizeof(int));

    printf("Hello! I am a double floating point variable."
        "My value is %lf and my size is %lu byte.\n",
         c, sizeof(double));
    
    printf("Bye see you soon \n");
    
    return 0;
}