#include <stdio.h>

int main(){
    double n, m;
    printf("두 실수 입력 : ");
    scanf("%lf %lf", &n, &m);
    
    printf("%f + %f = %f\n", n, m, n + m);
    printf("%f - %f = %f\n", n, m, n - m);
    printf("%f * %f = %f\n", n, m, n * m);
    printf("%f / %f = %f\n", n, m, n / m);

    return 0;
}