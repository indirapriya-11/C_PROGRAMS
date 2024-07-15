#include <stdio.h>

int main() {
    // Declare and initialize an array
    int arr[5] = {1, 2, 3, 4, 5};
    int i, sum = 0;

    // Print array elements
    printf("Array elements: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Calculate sum of array elements
    for (i = 0; i < 5; i++) {
        sum += arr[i];
    }

    // Print the sum
    printf("Sum of array elements: %d\n", sum);

    return 0;
}

