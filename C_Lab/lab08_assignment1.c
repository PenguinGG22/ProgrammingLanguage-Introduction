#include <stdio.h>

int globalVar = 0;

void testFunction() {
    int localFuncVar = 0;

    printf("Calling testFunction, iteration %d:\n", globalVar + 1);
    printf("Inside testFunction: globalVar = %d, localFuncVar = %d\n", globalVar, localFuncVar);

    globalVar++;
}

int main() {
    int localVar = 0;
    static int staticVar = 0;

    printf("Main function: globalVar = %d, localVar = %d, staticVar = %d\n", globalVar, localVar, staticVar);

    for (int i = 0; i < 3; i++) {
        testFunction();

        localVar++;
        staticVar++;

        printf("Main function: globalVar = %d, localVar = %d, staticVar = %d\n", globalVar, localVar, staticVar);
    }

    return 0;
}