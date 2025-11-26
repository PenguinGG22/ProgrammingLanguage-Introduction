#include <stdio.h>
#include <string.h>

struct person{
    int age;
    float weight;
}person;

int main(){
    struct person *personPtr;
    personPtr = &person;

    printf("Enter age: ");
    scanf("%d", &personPtr->age);

    printf("Enter weight: ");
    scanf("%f", &personPtr->weight);

    printf("Displaying\n");
    printf("Age: %d\n", personPtr->age);
    printf("weight: %.2f\n", personPtr->weight);

    return 0;
}