#include <stdio.h>

// Define a structure for representing a point in 2D space
struct Point {
    int x;
    int y;
};

int main() {
    // Declare a variable of type struct Point
    struct Point p1;

    // Initialize the members of struct Point
    p1.x = 10;
    p1.y = 20;

    // Access and print the values of struct members
    printf("Coordinates of Point: (%d, %d)\n", p1.x, p1.y);

    return 0;
}

