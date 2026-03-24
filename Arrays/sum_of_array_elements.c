#include <stdio.h>

/**
 * Program to calculate the sum of elements in an array.
 * Demonstrates array initialization and iteration.
 */
int main() {
    int arr[100], n, sum = 0;

    printf("Enter the number of elements (max 100): ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Calculating sum
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    printf("The sum of all elements is: %d\n", sum);

    return 0;
}
