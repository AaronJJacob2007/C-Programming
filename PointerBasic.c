#include <stdio.h>

int main() {
    int a = 1;
    int *p = &a;

    printf("Value of a = %d\n", a);
    printf("Address of a = %u\n", &a);
    printf("Value using pointer = %d\n", *p);
    printf("Address stored in pointer = %u\n", p);

    return 0;
}
