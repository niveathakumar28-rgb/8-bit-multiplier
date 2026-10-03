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

    printf("\n====================================\n");
    printf("       8-BIT BINARY MULTIPLIER\n");
    printf("====================================\n");

    printf("\nInitial Values:\n");

    printf("Multiplicand Register : ");
    printBinary(multiplicand, 16);

    printf("\nMultiplier Register   : ");
    printBinary(multiplier, 8);

    printf("\nProduct Register      : ");
    printBinary(product, 16);

    printf("\n\n--- REGISTER OPERATIONS ---\n");

    for (int i = 0; i < 8; i++) {

        printf("\nIteration %d\n", i + 1);

        printf("----------------------------\n");

        printf("Multiplicand : ");
        printBinary(multiplicand, 16);

        printf("\nMultiplier   : ");
        printBinary(multiplier, 8);

        printf("\nProduct      : ");
        printBinary(product, 16);

        printf("\nMultiplier LSB = %d\n", multiplier & 1);

        if (multiplier & 1) {
            product = product + multiplicand;
            printf("Operation    : ADD\n");
        } else {
            printf("Operation    : NO ADDITION\n");
        }

        multiplicand = multiplicand << 1;
        multiplier = multiplier >> 1;

        printf("After shift:\n");

        printf("Multiplicand : ");
        printBinary(multiplicand, 16);

        printf("\nMultiplier   : ");
        printBinary(multiplier, 8);

        printf("\nProduct      : ");
        printBinary(product, 16);

        printf("\n");
    }

    printf("\n====================================\n");
    printf("           FINAL RESULT\n");
    printf("====================================\n");

    printf("Input A : ");
    printBinary(originalA, 8);

    printf("\nInput B : ");
    printBinary(originalB, 8);

    printf("\nProduct : ");
    printBinary(product, 16);

    printf("\nDecimal Product = %u\n", product);

    return 0;
}
