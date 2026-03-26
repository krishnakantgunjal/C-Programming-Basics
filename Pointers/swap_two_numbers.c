#include <stdio.h>

/**
 * Program to swap two numbers using pointers (call by reference).
 * Demonstrates basic pointer usage and memory address manipulation.
 */
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;

    printf("Enter two numbers (x and y): ");
    scanf("%d %d", &x, &y);

    printf("Before swapping: x = %d, y = %d\n", x, y);

    // Passing memory addresses to the swap function
    swap(&x, &y);

    printf("After swapping:  x = %d, y = %d\n", x, y);

    return 0;
}
