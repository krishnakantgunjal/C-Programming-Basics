#include <stdio.h>

/**
 * Program to print a multiplication table using a while loop.
 */
int main() {
    int num, i = 1;

    printf("Enter a number to print its multiplication table: ");
    scanf("%d", &num);

    printf("Multiplication table for %d:\n", num);
    while (i <= 10) {
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
    }

    return 0;
}
