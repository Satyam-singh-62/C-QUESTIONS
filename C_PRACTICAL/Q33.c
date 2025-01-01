// 47. Count total number of words in a string.
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int i = 0, word_count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Loop through the string to count words
    while (str[i]) {
        // If the current character is a space, check if the previous character is a non-space
        if ((i == 0 || str[i - 1] == ' ') && str[i] != ' ') {
            word_count++;
        }
        i++;
    }

    printf("Total number of words: %d\n", word_count);
    return 0;
}