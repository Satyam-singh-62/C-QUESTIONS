// 52. Find area of rectangle, square and circle using UDF.
#include <stdio.h>
#define PI 3.14159

// Function to calculate the area of a rectangle
float area_of_rectangle(float length, float width) {
    return length * width;
}

// Function to calculate the area of a square
float area_of_square(float side) {
    return side * side;
}

// Function to calculate the area of a circle
float area_of_circle(float radius) {
    return PI * radius * radius;
}

int main() {
    float length, width, side, radius;

    // Input for rectangle
    printf("Enter the length and width of the rectangle: ");
    scanf("%f %f", &length, &width);
    printf("Area of the rectangle: %.2f\n", area_of_rectangle(length, width));

    // Input for square
    printf("Enter the side length of the square: ");
    scanf("%f", &side);
    printf("Area of the square: %.2f\n", area_of_square(side));

    // Input for circle
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    printf("Area of the circle: %.2f\n", area_of_circle(radius));

    return 0;
}
