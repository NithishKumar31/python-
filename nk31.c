#include <stdio.h>

int main() {
    float a, b, sum;

    printf("Enter first decimal number: ");
    scanf("%f", &a);

    printf("Enter second decimal number: ");
    scanf("%f", &b);

    sum = a + b;

    printf("Sum = %.2f\n", sum);

    return 0;
}