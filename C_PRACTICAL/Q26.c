// 26. Generate result sheet for 5 students using for loop.#include <stdio.h>

int main() {
    int marks[5][3]; // 5 students and 3 subjects
    int total[5];
    float average[5];

    for (int i = 0; i < 5; i++) {
        total[i] = 0;
        printf("\nEnter marks for Student %d:\n", i + 1);
        for (int j = 0; j < 3; j++) {
            printf("  Subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
            total[i] += marks[i][j];
        }
        average[i] = total[i] / 3.0;
    }

    printf("\nResult Sheet:\n");
    printf("Student\tTotal\tAverage\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\t%d\t%.2f\n", i + 1, total[i], average[i]);
    }

    return 0;
}