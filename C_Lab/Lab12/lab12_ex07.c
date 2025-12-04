#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main()
{
    FILE* write_ptr;
    errno_t err;
    unsigned char buffer[10] = { 1,5,3,4,5,3,7,8,2,11 };

    err = fopen_s(&write_ptr, "lab12_ex07.bin", "wb");
    if (err != 0) {
        printf("Please check the file to write!\n");
        exit(0);
    }
    fwrite(buffer, sizeof(buffer), 1, write_ptr); // write 10 bytes from our buffer
    fclose(write_ptr);

    return 0;
}