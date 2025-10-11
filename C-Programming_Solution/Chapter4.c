// 4-4
#include <stdio.h>
int main(){
    int num;
    printf("정수 입력:");
    scanf("%d", &num);
    num = ~num;
    num++;
    printf("부호를 바꾼 결과: %d", num);
    return 0;
}

#include <stdio.h>
int main(){
    int num = 3;
    num = num << 3;
    num = num >> 2;
    printf("%d", num);
    return 0;
}
