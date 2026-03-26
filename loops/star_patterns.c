#include <stdio.h>

/**
 * Program to print star patterns.
 * Demonstrates nested loops and switch-case.
 */

void print_star_pattern(int rows);
void print_reverse_star_pattern(int rows);

int main() {
    int choice, rows;

    while (1) {
        printf("\n --- Star Pattern Options --- \n");
        printf("1. Normal Star Pattern\n");
        printf("2. Reverse Star Pattern\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 3) break;

        printf("Enter the number of rows: ");
        scanf("%d", &rows);

        switch (choice) {
            case 1:
                print_star_pattern(rows);
                break;
            case 2:
                print_reverse_star_pattern(rows);
                break;
            default:
                printf("Invalid choice!\n");
                break;
        }
    }

    return 0;
}

void print_star_pattern(int x) {
    for (int i = 0; i < x; i++) {
        for (int j = 0; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void print_reverse_star_pattern(int y) {
    for (int i = 0; i < y; i++) {
        for (int j = 0; j < y - i; j++) {
            printf("*");
        }
        printf("\n");
    }
}
