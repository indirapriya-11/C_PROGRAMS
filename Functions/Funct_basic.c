#include <stdio.h>

// Function declarations
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b);

int main() {
    int num1, num2;
    int sum, difference, product;
    float quotient;

    // Input numbers from user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Call functions to perform operations
    sum = add(num1, num2);
    difference = subtract(num1, num2);
    product = multiply(num1, num2);
    quotient = divide(num1, num2);

    // Output results
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Quotient: %.2f\n", quotient);

    return 0;
}

// Function definitions
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    if (b != 0) {
        return (float)a / b;
    } else {
        printf("Error: Division by zero\n");
        return 0.0;
    }
}

