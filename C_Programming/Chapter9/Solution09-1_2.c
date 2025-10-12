#include <stdio.h>
int CelToFah(int num);
int FahToCel(int num);

int main(){
    int num1, num2;
    printf("화씨 입력 : ");
    scanf("%d", &num1);
    printf("섭씨 : %d\n", FahToCel(num1));
    printf("섭씨 입력 : ");
    scanf("%d", &num2);
    printf("화씨 : %d", CelToFah(num2));

    return 0;
}

int CelToFah(int num){
    return 1.8 * num + 32;
}

int FahToCel(int num){
    return (num - 32) / 1.8;
}