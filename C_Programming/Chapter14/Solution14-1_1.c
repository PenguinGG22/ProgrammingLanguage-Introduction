#include <stdio.h>

int SquareVal(int num){
    return num * num;
}
void SquareRef(int *num){
    *num = (*num) * (*num);
}

int main(){
    int num = 10;
    
    int result = SquareVal(num);
    SquareRef(&num);

    printf("Call By Value : %d\n", result);
    printf("Call By Reference : %d\n", num);
    
    return 0;
}