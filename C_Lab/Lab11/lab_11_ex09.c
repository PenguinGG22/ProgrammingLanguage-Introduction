#include <stdio.h>
#include <string.h>

typedef struct{
    float img;
    float real;
} complex;

void addNumbers(complex c1, complex c2, complex *result){
    result->real = c1.real + c2.real;
    result->img = c1.img + c2.img;
}

int main(){
    complex c1, c2, result;

    printf("For first number,\n");
    printf("Enter real part: ");
    scanf("%f", &c1.real);
    printf("Enter imaginary part: ");
    scanf("%f", &c1.img);
    
    printf("For Second number,\n");
    printf("Enter real part: ");
    scanf("%f", &c2.real);
    printf("Enter imaginary part: ");
    scanf("%f", &c2.img);

    addNumbers(c1, c2, &result);
    printf("result.real = %.1f\n", result.real);
    printf("result.img = %.1f\n", result.img);

    return 0;
}