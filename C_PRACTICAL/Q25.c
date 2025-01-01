// 25. Generate a multiplication table for any given number.
#include <stdio.h>

int main() {
    int num;

    printf("Enter a number to generate its multiplication table: ");
    scanf("%d", &num);

    printf("Multiplication Table for %d:\n", num);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}