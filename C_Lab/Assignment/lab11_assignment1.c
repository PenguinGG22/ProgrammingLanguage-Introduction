#include <stdio.h>
#include <math.h>

typedef struct{
    double radius;
    double x;
    double y;
}circle;

int intersectCircle(circle C1, circle C2){
    double distance = sqrt(pow(C1.x - C2.x, 2) + pow(C1.y - C2.y, 2));
    if(distance <= C1.radius + C2.radius){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    circle C1, C2;

    printf("Enter circle 1 (radius x y): ");
    scanf("%lf %lf %lf", &C1.radius, &C1.x, &C1.y);
    printf("Enter circle 2 (radius x y): ");
    scanf("%lf %lf %lf", &C2.radius, &C2.x, &C2.y);
    printf("Intersection of two circles?: %d", intersectCircle(C1, C2));

    printf("\n");
    printf("Enter circle 1 (radius x y): ");
    scanf("%lf %lf %lf", &C1.radius, &C1.x, &C1.y);
    printf("Enter circle 2 (radius x y): ");
    scanf("%lf %lf %lf", &C2.radius, &C2.x, &C2.y);
    printf("Intersection of two circles?: %d", intersectCircle(C1, C2));

    return 0;
}