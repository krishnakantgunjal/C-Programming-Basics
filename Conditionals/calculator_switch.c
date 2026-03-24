#include <stdio.h>

/**
 * Basic calculator program using a switch statement.
 * Supports addition, subtraction, multiplication, division, and squaring.
 */
int main() {
    int choice;
    float x, y, result;

    printf("\n --- SIMPLE CALCULATOR --- \n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Square\n");
    printf("Choose an operation (1-5): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter two numbers: ");
            scanf("%f %f", &x, &y);
            result = x + y;
            printf("Result: %.2f\n", result);
            break;

        case 2:
            printf("Enter two numbers: ");
            scanf("%f %f", &x, &y);
            result = x - y;
            printf("Result: %.2f\n", result);
            break;

        case 3:
            printf("Enter two numbers: ");
            scanf("%f %f", &x, &y);
            result = x * y;
            printf("Result: %.2f\n", result);
            break;

        case 4:
            printf("Enter two numbers: ");
            scanf("%f %f", &x, &y);
            if (y != 0) {
                result = x / y;
                printf("Result: %.2f\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;

        case 5:
            printf("Enter a number: ");
            scanf("%f", &x);
            result = x * x;
            printf("Result: %.2f\n", result);
            break;

        default:
            printf("Invalid choice! Please choose a number from 1 to 5.\n");
            break;
    }

    return 0;
}
