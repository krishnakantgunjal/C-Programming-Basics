#include <stdio.h>

/**
 * Program to generate Fibonacci series up to N terms iteratively.
 */
int main() {
    int n, a = 0, b = 1, next;

    printf("Enter the number of terms for the Fibonacci series: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            next = i;
        } else {
            next = a + b;
            a = b;
            b = next;
        }
        printf("%d ", next);
    }
    printf("\n");

    return 0;
}
