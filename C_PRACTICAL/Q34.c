// 49. Toggling of string.
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Loop through the string and toggle the case of each character
    for (int i = 0; str[i]; i++) {
        if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        } else if (islower(str[i])) {
            str[i] = toupper(str[i]);
        }
    }

    printf("Toggled string: %s\n", str);
    return 0;
}