#include <stdio.h>

int main() {
    char str[100];
    char *ptr;
    int length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // safer than scanf

    ptr = str;  // pointer points to the first character of the string

    while(*ptr != '\0') {  // iterate until null character
        length++;
        ptr++;  // move pointer to next character
    }

    printf("Length of the string: %d\n", length - 1); // -1 to ignore newline from fgets
    return 0;
}
