#include <stdio.h>
#include <stdlib.h>

struct Book {
    char name[20];
    char author[20];
    int pages;
    float price;
};

int main() {
    struct Book *b;

    b = (struct Book *)malloc(sizeof(struct Book));

    printf("Enter book name, author, pages, price:\n");
    scanf("%s %s %d %f", b->name, b->author, &b->pages, &b->price);

    printf("\nBook Details:\n");
    printf("Name: %s\nAuthor: %s\nPages: %d\nPrice: %.2f\n",
           b->name, b->author, b->pages, b->price);

    free(b);
    return 0;
}

