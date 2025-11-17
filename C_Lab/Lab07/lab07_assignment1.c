#include <stdio.h>

int combinations(int n, int r) {
    if (r == 0 || r == n) {
        return 1;
    }
    if (r == 1) {
        return n;
    }
    if (r > n / 2) {
        r = n - r;
    }

    return combinations(n - 1, r - 1) + combinations(n - 1, r);
}

int main(){
    int n, r;

    printf("Enter 'n' and 'r' to compute combination: ");
    scanf("%d %d", &n, &r);

    printf("The number of combinations: C(%d, %d) = %d", n, r, combinations(n, r));

    return 0;
}