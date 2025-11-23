#include <stdio.h>

int main() {
#ifdef DEBUG
    printf("Debug: %s %s %s %d\n", __DATE__, __TIME__, __FILE__, __LINE__);
#endif

    printf("Program finished.\n");
    return 0;
}