#include <stdio.h>

int main(){
    int T;
    printf("입력받을 정수의 개수 입력 : ");
    scanf("%d", &T);

    double num = T;
    double hap = 0;
    while(T--){
        double cur;
        printf("숫자 입력 : ");
        scanf("%lf", &cur);
        hap += cur;
    }
    printf("%lf", hap / num);

    return 0;
}