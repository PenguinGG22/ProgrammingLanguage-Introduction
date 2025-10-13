#include <stdio.h>

int main(){
    int num1 = 10;
    int num2 = 20;
    int *ptr1 = &num1;
    int *ptr2 = &num2;

    (*ptr1) += 10;
    (*ptr2) -= 10;

    int *tmp = ptr1;
    ptr1 = ptr2;
    ptr2 = tmp;

    printf("num1 : %d\n", *ptr2);
    printf("num2 : %d", *ptr1);

    return 0;
}