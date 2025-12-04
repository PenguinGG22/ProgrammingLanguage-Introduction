#include <errno.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    FILE* fptr;
    errno_t err;


    if ((err = fopen_s(&fptr, "program.txt", "r")) != 0) {
        printf("Error! opening file");
        // Program exits if fails to open a file
        exit(0);
    }

    fscanf_s(fptr, "%d", &num);

    printf("Value of n = %d", num);
    fclose(fptr);

    return 0;
}