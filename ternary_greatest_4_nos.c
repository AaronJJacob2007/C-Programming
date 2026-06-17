#include <stdio.h>

int main() {
    int a, b, c, d, largest;

    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    // Use ternary operators to find the largest
    int big1 = (a > b) ? a : b; // Greatest of a and b
    int big2 = (c > d) ? c : d; // Greatest of c and d
    largest = (big1 > big2) ? big1 : big2; // Greatest of big1 and big2

    printf("The largest number is %d\\n", largest);

    return 0;
}
