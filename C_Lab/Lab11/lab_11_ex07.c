#include <stdio.h>

struct student{
    char name[50];
    int age;
};

void display(struct student s);

int main(){
    struct student s;
    printf("Enter name: ");
    scanf_s("%s", s.name, sizeof(s.name));
    printf("Enter age: ");
    scanf("%d", &s.age);
    display(s);
}

void display(struct student s){
    printf("Displaying information\n");
    printf("Name : %s\n", s.name);
    printf("Age : %d", s.age);
}