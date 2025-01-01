// 8. Find area of rectangle and circle.
#include <stdio.h>

#define PI 3.14159

int main() {
    float length, width, radius, area_rectangle, area_circle;

    // Rectangle
    printf("Enter length and width of the rectangle: ");
    scanf("%f %f", &length, &width);
    area_rectangle = length * width;
    printf("Area of rectangle = %.2f\n", area_rectangle);

    // Circle
    printf("Enter radius of the circle: ");
    scanf("%f", &radius);
    area_circle = PI * radius * radius;
    printf("Area of circle = %.2f\n", area_circle);

    return 0;
}