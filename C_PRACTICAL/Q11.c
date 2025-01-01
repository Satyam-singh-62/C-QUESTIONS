// 11. Find the maximum of 2 numbers.
#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a > b)
        printf("Maximum = %d\n", a);
    else
        printf("Maximum = %d\n", b);

    return 0;
}