#include <stdio.h>

/**
 * Program to find the nth Fibonacci number using recursion.
 */
int fibonacci(int n);

int main() {
    int x;

    printf("Enter the index for the Fibonacci number (starting from 1): ");
    scanf("%d", &x);

    if (x <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        printf("Fibonacci number at index %d is: %d\n", x, fibonacci(x));
    }

    return 0;
}

/**
 * Recursive function to find the nth Fibonacci number.
 * F(1) = 0, F(2) = 1, F(n) = F(n-1) + F(n-2)
 */
int fibonacci(int n) {
    if (n == 1) return 0;
    if (n == 2) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
