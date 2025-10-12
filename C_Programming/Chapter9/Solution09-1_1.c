#include <stdio.h>
int MaxNumberCompare(int num1, int num2, int num3);
int MinNumberCompare(int num1, int num2, int num3);

int main(){
    int num1, num2, num3;
    printf("세 개의 정수 입력 : ");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("가장 작은 정수 : %d\n", MinNumberCompare(num1, num2, num3));
    printf("가장 큰 정수 : %d", MaxNumberCompare(num1, num2, num3));
    return 0;
}

int MaxNumberCompare(int num1, int num2, int num3){
    if(num1 > num2 && num1 > num3)
        return num1;
    else if (num2 > num1 && num2 > num3)
        return num2;
    else
        return num3;
}

int MinNumberCompare(int num1, int num2, int num3){
    if(num1 < num2 && num1 < num3)
        return num1;
    else if (num2 < num1 && num2 < num3)
        return num2;
    else
        return num3;
}