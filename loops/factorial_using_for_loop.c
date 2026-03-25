#include <stdio.h>

/**
 * Program to calculate the factorial of a number using a for loop.
 */
int main() {
    int num;
    unsigned long long fact = 1;

    printf("Enter a number to find its factorial: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Error: Factorial of a negative number doesn't exist.\n");
    } else {
        for (int i = 1; i <= num; i++) {
            fact *= i;
        }
        printf("Factorial of %d is: %llu\n", num, fact);
    }

    return 0;
}
