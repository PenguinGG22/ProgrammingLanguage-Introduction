#include <stdio.h>
#include <stdlib.h> // malloc, free, exit functions are declared in this header

struct book_info
{
    int year;        // Publication year
    char title[50];  // Book title  
};
typedef struct book_info BOOK;

int main()
{
    BOOK* books;        // Pointer to dynamically allocate an array of books
    int size, i;        // Variables for user input and iteration

    do                    // Input for the number of books (ensure valid input)
    {
        printf("Enter the number of books: "); scanf("%d", &size);
        if (size <= 0)
            printf("Error: Invalid number entered. Please enter again ");
    } while (size <= 0);
    
    // Dynamically allocate memory for an array of books based on the size
    books = (BOOK*)malloc(sizeof(BOOK) * size); // Allocate memory for the array

    if (books == NULL)
    {
        puts("Error: Memory allocation failed.");
        exit(1);        // Exit if memory allocation fails
    }

    // Input book details for the given size
    for (i = 0; i < size; i++)
    {
        printf("%d) Enter the book title: ", i + 1);
        scanf_s("%s", books[i].title, sizeof(books[i].title));

        printf("   Enter the publication year: ");
        scanf_s("%d", &(books[i].year));
    }

    // Print the book details
    printf("\n >> Book Details << \n");
    printf("\n Book Title      Publication Year ");
    printf("\n =====================\n");
    for (i = 0; i < size; i++)
    {
        printf("%3d %-12s %4d\n", i + 1, books[i].title, books[i].year);
    }
    printf(" =====================\n");

    free(books); // Free the dynamically allocated memory for the books array

    return 0;
}
