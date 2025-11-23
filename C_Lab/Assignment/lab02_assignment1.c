#include <stdio.h>

int main(){
    float val = 314.159;

    printf("%12.4f\n", val);
    printf("%12.3f\n", val);
    printf("%12.2f\n", val);
    printf("%12.1f\n", val);
    printf("%12.0f\n", val);
    printf("%0.3f", val);

    return 0;
}