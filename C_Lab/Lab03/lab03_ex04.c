#include <stdio.h>  

int main()
{
    int age = 0;  // variable declaration  
    printf("Enter your age: ");
    scanf_s("%d", &age);   // taking user input for age variable  
    (age >= 19) ? (printf("Go date!")) : (printf("too young to be in a relationship"));  // conditional operator

    return 0;
}
