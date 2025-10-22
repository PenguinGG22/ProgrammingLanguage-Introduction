#include <stdio.h>

#define gfg 500

#if gfg > 200
#undef gfg
#define gfg 200
#elif gfg < 50
#undef gfg
#define gfg 50
#else
#undef gfg
#define gfg 100
#endif

int main()
{
    printf("gfg: %d", gfg);
    return 0;
}