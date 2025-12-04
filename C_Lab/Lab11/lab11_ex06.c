#include <stdio.h>
#define N 5

struct person                  // Structure definition for a person
{
    char name[20], gender[5];   // Name, Gender
    int age;                    // Age
};

int main()
{
    int i;
    struct person* ptr;          // ptr is a pointer to a structure of type person

    // Initialize an array of N person structures
    struct person user[N] = { {"John", "Male"}, {"Emily", "Female"},
                               {"James", "Male"}, {"Sophia", "Female"}, {"Michael", "Male"} };

    // Ask the user to input age for each person in the array using ptr
    ptr = user;                   // Set ptr to point to the first person in the array
    for (i = 0; i < N; i++)
    {
        // Prompt to enter age for each user
        //printf("%s's age? ", (*ptr).name);
        //scanf("%d", &(*ptr).age);
        printf("%s's age? ", ptr->name);
        scanf("%d", &(ptr->age));
        ptr++;                      // Move the pointer to the next person in the array
    }

    // Print the details of each person from the array
    printf("\n Name   Gender    Age \n");
    printf("======================\n");
    ptr = user;                   // Reset ptr to point to the start of the array
    for (i = 0; i < N; i++)
    {
        // Display each person's details
        printf("%s\t %s\t %d\n", ptr->name, ptr->gender, ptr->age);
        ptr++;                      // Move the pointer to the next person in the array
    }
    printf("======================\n\n");

    return 0;
}
