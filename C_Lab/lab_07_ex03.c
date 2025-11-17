#include <stdio.h>
void print_happy_birthday(char name[], int age);         // function prototype

int main(void)
{
    char user_name[20];
    unsigned int user_age = 0;

    printf("Enter your name: \n");
    fgets(user_name, sizeof(user_name), stdin);  // read string

    printf("Enter your age: \n");
    scanf_s("%d", &user_age);

    print_happy_birthday(user_name, user_age);        // function call
    return 0;
}

void print_happy_birthday(char name[], int age)
{
    printf("Congratulations %s on your %d th Birthday\n", name, age);
    return;
}