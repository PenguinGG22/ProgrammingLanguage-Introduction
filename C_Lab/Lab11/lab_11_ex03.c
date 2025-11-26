#include <stdio.h>
#include <string.h>

struct complex{
    int img;
    float real;
};

struct number{
    struct complex comp;
    int integer;
};

int main(){
    struct number num1;
    num1.comp.img = 11;
    num1.comp.real = 5.25;
    num1.integer = 6;

    printf("Imagiary Part : %d\n", num1.comp.img);
    printf("Real Part No. : %.2f\n", num1.comp.real);
    printf("Integer : %.d\n", num1.integer);

    return 0;
}