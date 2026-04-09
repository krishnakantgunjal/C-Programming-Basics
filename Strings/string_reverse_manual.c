#include <stdio.h>

#define MAX_SIZE 50

/**
 * Program to reverse a string manually without using library functions.
 */
void reverse_string(char str[]);

int main() {
    char str[MAX_SIZE];

    printf("Enter a string to reverse: ");
    scanf("%s", str); // Note: Only reads until first whitespace

    reverse_string(str);

    printf("Reversed string: %s\n", str);

    return 0;
}

/**
 * Reverses a string in-place.
 */
void reverse_string(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    int i = 0, j = length - 1;
    while (i < j) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}
