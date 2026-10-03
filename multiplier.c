#include <stdio.h>

int main() {
    int a, b;
    int result;

    printf("Enter first 8-bit number: ");
    scanf("%d", &a);

    printf("Enter second 8-bit number: ");
    scanf("%d", &b);

    result = a * b;

    printf("Product = %d\n", result);

    return 0;
}
