// 10. Swap 2 numbers without 3rd variable.
#include <stdio.h>

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    x = x + y;  // Sum of x and y is stored in x
    y = x - y;  // Subtracting y from the sum gives the original x
    x = x - y;  // Subtracting the new y from the sum gives the original y

    printf("After swapping: x = %d, y = %d\n", x, y);
    return 0;
}