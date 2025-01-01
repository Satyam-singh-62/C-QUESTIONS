// 18. Print the sum of first 10 numbers.
#include <stdio.h>

int main() {
    int sum = 0;
    for (int i = 1; i <= 10; i++) {
        sum += i;
    }
    printf("Sum of the first 10 numbers = %d\n", sum);
    return 0;
}