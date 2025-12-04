#if 1
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[50];
    int num;
    FILE* fptr;
    errno_t err;

    // use appropriate location if you are using MacOS or Linux
    err = fopen_s(&fptr, "test_20251203.txt", "w");

    if (err != 0) {
        printf("Error!");
        exit(0);
    }
    printf("Enter your name: ");
    fgets(name, 50, stdin);
    fprintf(fptr, "%s", name);

    printf("Enter your student number: ");
    scanf_s("%d", &num);
    fprintf(fptr, "%d", num);

    fclose(fptr);

    return 0;
}
#endif