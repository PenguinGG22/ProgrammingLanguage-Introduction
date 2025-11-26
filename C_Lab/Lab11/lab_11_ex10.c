#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char title[50];
    int year;
}BOOK;

int main(){
    int size;
    printf("Enter the numer of books: ");
    scanf("%d", &size);
    BOOK *books = (BOOK*)malloc(sizeof(BOOK) * size);

    for(int i = 0; i < size; i++){
        printf("Enter the title of book%d: ", i + 1);
        scanf_s("%s", books[i].title, sizeof(books->title));
        printf("Enter the publication year of book%d: ", i + 1);
        scanf("%d", &books[i].year);
    }

    for(int i = 0; i < size; i++){
        printf("Title of book%d: %s\n", i + 1, books[i].title);
        printf("Publication year of book%d: %d\n", i + 1, books[i].year);
    }

    free(books);
    return 0;
}