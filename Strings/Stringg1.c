#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int length;

    // Reading input strings
    printf("Enter string 1: ");
    fgets(str1, sizeof(str1), stdin);
    // Removing newline character from fgets
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter string 2: ");
    fgets(str2, sizeof(str2), stdin);
    // Removing newline character from fgets
    str2[strcspn(str2, "\n")] = '\0';

    // Calculating and printing string lengths
    length = strlen(str1);
    printf("Length of string 1: %d\n", length);

    length = strlen(str2);
    printf("Length of string 2: %d\n", length);

    // Concatenating and printing strings
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);

    return 0;
}

