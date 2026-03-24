#include <stdio.h>

/**
 * Program to calculate the sum of two numbers.
 * Demonstrates basic input and output.
 */
int main() {
    int num1, num2, sum;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("Sum of %d and %d is: %d\n", num1, num2, sum);

    return 0;
}
