#include <errno.h>
#include <stdio.h>
#include <stdlib.h>

struct threeNum
{
    int n1, n2, n3;
};

int main()
{
    int n;
    struct threeNum num;
    FILE* fptr;
    errno_t err;

    if ((err = fopen_s(&fptr, "program.bin", "wb")) != 0) {
        printf("Error! opening file");
        // Program exits if the file pointer returns NULL.
        exit(0);
    }

    for (n = 1; n < 5; ++n)
    {
        num.n1 = n;
        num.n2 = 5 * n;
        num.n3 = 5 * n + 1;
        fwrite(&num, sizeof(struct threeNum), 1, fptr);
    }
    fclose(fptr);

    return 0;
}