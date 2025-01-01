// 15. Generate electricity bill based on usage of units.
#include <stdio.h>

int main() {
    int units;
    float bill;
    printf("Enter electricity usage in units: ");
    scanf("%d", &units);

    if (units <= 100)
        bill = units * 1.5;
    else if (units <= 300)
        bill = 100 * 1.5 + (units - 100) * 2.0;
    else
        bill = 100 * 1.5 + 200 * 2.0 + (units - 300) * 3.0;

    printf("Total Electricity Bill = Rs. %.2f\n", bill);
    return 0;
}