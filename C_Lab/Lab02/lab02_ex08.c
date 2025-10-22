#include <stdio.h>

int main() {
    char name[50];
    int id;
    float gpa_4_5, gpa_4_0;

    // Input student's name, ID, and GPA on a 4.5 scale
    printf("Enter student's name: ");
    fgets(name, sizeof(name), stdin);
    printf("Enter student ID: ");
    scanf("%d", &id);
    printf("Enter GPA (4.5 scale): ");
    scanf("%f", &gpa_4_5);

    // Convert GPA to 4.0 scale
    gpa_4_0 = (gpa_4_5 / 4.5) * 4.0;

    // Output the results
    printf("\nStudent Name: %s", name);
    printf("Student ID: %d\n", id);
    printf("GPA (4.0 scale): %.2f\n", gpa_4_0);

    return 0;
}
