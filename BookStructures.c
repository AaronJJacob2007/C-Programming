#include <stdio.h>

struct Book {
    
    char name[50];
    float price;
};

int main() {
    struct Book b[10];
    int i;

    for(i = 0; i < 10; i++) {
        printf("Enter Book Name, Price:\n");
        scanf(" %s %f",  b[i].name, &b[i].price);
    }

    printf("\nBook Details:\n");
    for(i = 0; i < 10; i++) {
        printf(" %s %.2f\n",b[i].name, b[i].price);
    }

    return 0;
}
