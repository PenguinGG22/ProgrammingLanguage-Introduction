#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main()
{
    char ch, source_file[20], target_file[20];
    FILE* source, * target;
    errno_t err;

    printf("Enter name of file to copy\n");
    gets(source_file);
    err = fopen_s(&source, source_file, "r");

    if (err != 0) {
        printf("Press any key to exit...\n");
        exit(0);
    }

    printf("Enter name of target file\n");
    gets(target_file);

    err = fopen_s(&target,target_file, "w");

    if (err != 0) {
        fclose(source);
        printf("Press any key to exit...\n");
        exit(0);
    }

    while ((ch = fgetc(source)) != EOF)
        fputc(ch, target);

    printf("File copied successfully.\n");
    fclose(source);
    fclose(target);
    
    return 0;
}
