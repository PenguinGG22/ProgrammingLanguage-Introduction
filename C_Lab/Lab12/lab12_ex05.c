#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

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

    if ((err = fopen_s(&fptr, "program.bin", "rb")) != 0) {
        printf("Error! opening file");
        // Program exits if fails to open a file.
        exit(0);
    }

    for (n = 1; n < 5; ++n)
    {
        fread(&num, sizeof(struct threeNum), 1, fptr);
        printf("n1: %d\tn2: %d\tn3: %d\n", num.n1, num.n2, num.n3);
    }
    fclose(fptr);

    return 0;
}