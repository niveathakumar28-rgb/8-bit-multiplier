#include <stdio.h>

void printBinary(unsigned int number, int bits) {
    for (int i = bits - 1; i >= 0; i--) {
        printf("%d", (number >> i) & 1);
    }
}

int main() {
    unsigned int multiplicand, multiplier;
    unsigned int product = 0;

    printf("Enter first 8-bit number (0-255): ");
    scanf("%u", &multiplicand);

    printf("Enter second 8-bit number (0-255): ");
    scanf("%u", &multiplier);

    if (multiplicand > 255 || multiplier > 255) {
        printf("Error: Enter numbers between 0 and 255.\n");
        return 1;
    }

    unsigned int originalA = multiplicand;
    unsigned int originalB = multiplier;

    printf("\n--- Shift-and-Add Multiplication ---\n");

    for (int i = 0; i < 8; i++) {

        printf("\nStep %d\n", i + 1);

        printf("Multiplicand : ");
        printBinary(multiplicand, 16);

        printf("\nMultiplier   : ");
        printBinary(multiplier, 8);

        if (multiplier & 1) {
            printf("\nLSB = 1 -> Add multiplicand");
            product = product + multiplicand;
        } else {
            printf("\nLSB = 0 -> No addition");
        }

        printf("\nProduct      : ");
        printBinary(product, 16);

        multiplier = multiplier >> 1;
        multiplicand = multiplicand << 1;
    }

    printf("\n\n--- Final Result ---\n");

    printf("First number  : ");
    printBinary(originalA, 8);

    printf("\nSecond number : ");
    printBinary(originalB, 8);

    printf("\nProduct       : ");
    printBinary(product, 16);

    printf("\nDecimal Product = %u\n", product);

    return 0;
}
