#include <stdio.h>

/**
 * Program to find the factorial of a number using recursion.
 */
unsigned long long factorial(int n);

int main() {
    int num;

    printf("Enter a number to find its factorial: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Error: Factorial of a negative number doesn't exist.\n");
    } else {
        printf("Factorial of %d is: %llu\n", num, factorial(num));
    }

    return 0;
}

/**
 * Recursive function to calculate factorial.
 */
unsigned long long factorial(int x) {
    if (x == 0 || x == 1) {
        return 1;
    } else {
        return (x * factorial(x - 1));
    }
}
