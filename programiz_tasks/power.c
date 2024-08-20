#include <stdio.h>
#include <math.h>

int main() {
    int base, exponent;

    printf("Enter the base: ");
    scanf("%d", &base);

    printf("Enter the exponent: ");  
    scanf("%d", &exponent);

    if (exponent < 0) {
        printf("Negative exponents are not handled in this version.\n");
        return 1;
    }

    if (base == 0 && exponent == 0) {
        printf("0^0 is undefined.\n");
        return 1;
    }

    long long result = 1; // Use long long for larger results
    for (int i = 1; i <= exponent; i++) {
        result = result * base;
    }

    printf("Power = %lld\n", result); // Use %lld for long long

    return 0;
}

