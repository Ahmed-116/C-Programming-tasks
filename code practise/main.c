#include <stdio.h>

int main() {
    double base, exponent, result = 1;

    printf("Enter the base number: ");
    scanf("%lf", &base);

    printf("Enter the exponent: ");
    scanf("%lf", &exponent);

    int i = 0;
    while (i < exponent) {
        result *= base;
        i++;
    }

    printf("%.2lf raised to the power of %.2lf is: %.2lf\n", base, exponent, result);

    return 0;
}


