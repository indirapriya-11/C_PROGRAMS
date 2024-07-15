#include <stdio.h>

int main() {
    int num = 10;
    int *ptr;

    // Assign address of num to ptr
    ptr = &num;

    // Accessing variable using pointer
    printf("Value of num: %d\n", *ptr);

    // Changing value of num using pointer
    *ptr = 20;
    printf("Updated value of num: %d\n", num);

    // Working with arrays and pointers
    int arr[5] = {1, 2, 3, 4, 5};
    int i;
    int *ptr_arr = arr;

    // Print array elements using pointer
    printf("Array elements: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", *(ptr_arr + i));
    }
    printf("\n");

    return 0;
}

