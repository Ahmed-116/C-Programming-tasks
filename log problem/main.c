#include <stdio.h>

int main() {
    int sum = 0;
    int allPositive = 1; // Using 1 for true and 0 for false
    int number;

    while (allPositive) {
        printf("Enter a number: ");
        scanf("%d", &number);

        if (number > 0) {
            sum += number;
        } else {
            allPositive = 0;
        }
    }

    printf("Sum of all positive numbers: %d\n", sum);

    return 0;
}
