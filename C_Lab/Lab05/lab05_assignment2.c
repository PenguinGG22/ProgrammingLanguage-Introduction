#include <stdio.h>

#define PRINT_OCTAL(n) printf("%o", n)
#define PRINT_DECIMAL(n) printf("%d", n)
#define PRINT_HEXADECIMAL(n) printf("%x", n)

int main() {
    printf("------------------------------------\n");
    printf("octal\t     decimal\t hexadecimal\n");
    printf("------------------------------------\n");

    for (int i = 1; i <= 15; i++) {
        PRINT_OCTAL(i);
        printf("\t\t");
        PRINT_DECIMAL(i);
        printf("\t\t");
        PRINT_HEXADECIMAL(i);
        printf("\n");
    }

    return 0;
}