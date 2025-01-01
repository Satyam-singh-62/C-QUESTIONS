// 22. Check whether given number is Armstrong.
#include <stdio.h>
#include <math.h>

int main() {
    int num, original, remainder, n = 0;
    double result = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    // Count the number of digits
    while (num != 0) {
        num /= 10;
        n++;
    }

    num = original;

    // Calculate the sum of digits raised to the power of n
    while (num != 0) {
        remainder = num % 10;
        result += pow(remainder, n);
        num /= 10;
    }

    if ((int)result == original)
        printf("The number is an Armstrong number.\n");
    else
        printf("The number is not an Armstrong number.\n");

    return 0;
}
