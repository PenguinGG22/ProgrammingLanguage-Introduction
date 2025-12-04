#include <errno.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* fp;

    fp = fopen("test.txt", "r+");
    if (fp == NULL) {
        printf("Please check the file to read!\n");
    } else {
        printf("file reading test using fopen() in C\n");
    }
    
    fclose(fp);
    return 0;
}
