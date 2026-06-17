 #include <stdio.h>


 long power(int base, int exp) {
    // Base case: If the exponent is 0, any number raised to power 0 is 1.
    if (exp == 0) {
        return 1;
    }
    // Recursive step: Multiply the base by the result of calling power with exponent - 1.
    else {
        return base * power(base, exp - 1);
    }
}

int main() {
    int base_num, exponent;
     long result;

    printf("Enter the base number: ");
    scanf("%d", &base_num);

    printf("Enter the exponent (a non-negative integer): ");
    scanf("%d", &exponent);

    // Call the recursive function to calculate the power
    result = power(base_num, exponent);

    printf("%d raised to the power of %d is: %lld\n", base_num, exponent, result);
    getch();
    return 0;
}
