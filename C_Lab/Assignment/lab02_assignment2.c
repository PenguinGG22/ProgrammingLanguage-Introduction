#include <stdio.h>

#define PI 3.14159

float calculateArea(float r) {
    return r * r * PI;
}

int main(){
    float radius;
    float area;

    printf("Enter radius: ");
    scanf("%f", &radius);
    
    area = calculateArea(radius);
    
    printf("Area: %.3f", area);

    return 0;
}