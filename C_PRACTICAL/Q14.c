// 14. Generate student’s result based on percentage.
#include <stdio.h>

int main() {
    float percentage;
    printf("Enter the percentage: ");
    scanf("%f", &percentage);

    if (percentage >= 90)
        printf("Grade: A\n");
    else if (percentage >= 75)
        printf("Grade: B\n");
    else if (percentage >= 50)
        printf("Grade: C\n");
    else if (percentage >= 35)
        printf("Grade: D\n");
    else
        printf("Fail\n");

    return 0;
}
