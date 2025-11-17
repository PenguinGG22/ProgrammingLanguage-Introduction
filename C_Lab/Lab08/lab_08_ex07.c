#include <stdio.h> /* function declaration */

void next(void);
int counter = 7; /* global variable */

int main() {
    while (counter < 10) {
        next();
        counter++;
    }
    return 0;
}
void next(void) {    /* function definition */
    /* local static variable */
    static int iteration = 13;
    //int iteration = 13; 
    iteration++;
    printf("iteration=%d and counter= %d\n", iteration, counter);
}