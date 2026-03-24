#include <stdio.h>

/**
 * Program to check if a number is positive, negative, or zero.
 * Demonstrates basic if-else-if conditional statements.
 */
int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("You entered a negative number: %d\n", num);
    } else if (num > 0) {
        printf("You entered a positive number: %d\n", num);
    } else {
        printf("You entered zero: %d\n", num);
    }

    return 0;
}
