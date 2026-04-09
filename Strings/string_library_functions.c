#include <stdio.h>
#include <string.h>

#define SIZE 100

/**
 * Program demonstrating common string library functions found in string.h.
 */
int main() {
    char str1[SIZE], str2[SIZE], str3[SIZE];

    printf(" --- STRING LIBRARY FUNCTIONS --- \n");
    printf("Enter first string: ");
    fflush(stdin); // Clear input buffer
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    printf("\nFirst string: %s", str1);
    printf("\nSecond string: %s", str2);

    // Length
    printf("\n\nLength of first string: %lu", (unsigned long)strlen(str1));
    printf("\nLength of second string: %lu", (unsigned long)strlen(str2));

    // Copy
    strcpy(str3, str1);
    printf("\n\nFirst string copied to str3: %s", str3);

    // Concatenate
    strcat(str1, str2);
    printf("\nConcatenation Result (str1 + str2): %s", str1);

    // Comparison
    if (strcmp(str2, str3) == 0) {
        printf("\nSecond string and the copy of first string are equal.");
    } else {
        printf("\nSecond string and the copy of first string are not equal.");
    }

    printf("\n");
    return 0;
}
/**
 * Note: strrev() is not a standard C function (found in some compilers like MinGW).
 * Using standard functions for portability.
 */
