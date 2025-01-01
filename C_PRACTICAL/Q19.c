// 19. Print the sum of odd and even numbers between 51 and 550.
#include <stdio.h>

int main() {
    int odd_sum = 0, even_sum = 0;

    for (int i = 51; i <= 550; i++) {
        if (i % 2 == 0)
            even_sum += i;
        else
            odd_sum += i;
    }

    printf("Sum of even numbers = %d\n", even_sum);
    printf("Sum of odd numbers = %d\n", odd_sum);
    return 0;
}