#include <stdio.h>
int fibo(int n) {
    if (n == 0) {
    return 0;
    } 
    else if (n == 1) 
    {
    return 1;
    }
    else 
    {
        return (fibo(n - 1) + fibo(n - 2));
    }
}
int main() {
    int n, i;
    printf("Enter the number of elements for the Fibonacci series: ");
    scanf("%d", &n);
    if (n < 0) {
    printf("You can only enter positive numbers.\n");
    } 
    else {
    printf("Fibonacci Series: ");
    for (i = 0; i < n; i++) {
    printf("%d ", fibo(i));
    }
    printf("\n");
    }
    getch();
    return 0;
}
