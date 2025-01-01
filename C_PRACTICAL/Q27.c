// 41. Multiply first 10 numbers using 1-D Array.
#include <stdio.h>

int main() {
    int arr[10];
    long long product = 1;

    // Initialize the array with the first 10 numbers
    for (int i = 0; i < 10; i++) {
        arr[i] = i + 1;
    }

    // Multiply the numbers
    for (int i = 0; i < 10; i++) {
        product *= arr[i];
    }

    printf("Product of the first 10 numbers = %lld\n", product);
    return 0;
}