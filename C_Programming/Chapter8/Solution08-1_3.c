#include <stdio.h>

int main(){
    int math, korean, english;
    printf("국어, 영어, 수학 점수 입력 : ");
    scanf("%d %d %d", &korean, &english, &math);

    double avg = (korean + english + math) / 3.0;

    if(avg >= 90){
        printf("A");
    }
    else if(avg >= 80){
        printf("B");
    }
    else if(avg >= 70){
        printf("C");
    }
    else if(avg >= 50){
        printf("D");
    }
    else{
        printf("F");
    }

    return 0;
}