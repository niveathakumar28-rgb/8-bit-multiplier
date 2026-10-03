#include <stdio.h>

int main() {
    unsigned int multiplicand, multiplier;
    unsigned int product = 0;

    printf("Enter first 8-bit number: ");
    scanf("%u", &multiplicand);

    printf("Enter second 8-bit number: ");
    scanf("%u", &multiplier);

    for (int i = 0; i < 8; i++) {

        if (multiplier & 1) {
            product = product + multiplicand;
        }

        multiplicand = multiplicand << 1;
        multiplier = multiplier >> 1;
    }

    printf("Product = %u\n", product);

    return 0;
}
