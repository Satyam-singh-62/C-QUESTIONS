// 50. Check whether given string is palindrome.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int length, i, flag = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character if present
    str[strcspn(str, "\n")] = '\0';

    length = strlen(str);

    // Check for palindrome
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            flag = 1;
            break;
        }
    }

    if (flag) {
        printf("The string is not a palindrome.\n");
    } else {
        printf("The string is a palindrome.\n");
    }

    return 0;
}