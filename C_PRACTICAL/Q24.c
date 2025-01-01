// 24. Generate a Fibonacci series up to N Numbers.
#include <stdio.h>

int main() {
    int limit, t1 = 0, t2 = 1, nextTerm;

    printf("Enter the maximum value for the Fibonacci series: ");
    scanf("%d", &limit);

    printf("Fibonacci Series: ");
    while (t1 <= limit) {
        printf("%d ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    return 0;
}