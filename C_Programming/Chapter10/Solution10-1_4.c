#include <stdio.h>

int main(){
    int money = 3500;
    int creambread = 500;
    int chip = 700;
    int coke = 400;

    printf("현재 당신이 소유하고 있는 금액 : %d\n", money);
    
    for(int i = 1; i < 10; i++){
        for(int j = 1; j < 10; j++){
            for(int k = 1; k < 10; k++){
                int hap = creambread * i + chip * j + coke * k;
                if(money == hap){
                    printf("크림빵 %d개, 새우깡 %d개, 콜 라 %d개\n", i, j, k);
                }
            }
        }
    }

    return 0;
}