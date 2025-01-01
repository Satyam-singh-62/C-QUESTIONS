// 9. Swap 2 numbers using 3rd variable.
#include <stdio.h>

int main() {
    int x, y, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    temp = x;  // Storing the value of x in temp
    x = y;     // Assigning the value of y to x
    y = temp;  // Assigning the value of temp (original x) to y

    printf("After swapping: x = %d, y = %d\n", x, y);
    return 0;
}