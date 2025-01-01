// 17. Find area of rectangle, circle and square using switch case.
#include <stdio.h>
#define PI 3.14159

int main() {
    int choice;
    float length, width, radius, side, area;

    printf("Choose a shape to calculate the area:\n");
    printf("1. Rectangle\n2. Circle\n3. Square\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter length and width of the rectangle: ");
            scanf("%f %f", &length, &width);
            area = length * width;
            printf("Area of Rectangle = %.2f\n", area);
            break;

        case 2:
            printf("Enter the radius of the circle: ");
            scanf("%f", &radius);
            area = PI * radius * radius;
            printf("Area of Circle = %.2f\n", area);
            break;

        case 3:
            printf("Enter the side length of the square: ");
            scanf("%f", &side);
            area = side * side;
            printf("Area of Square = %.2f\n", area);
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}