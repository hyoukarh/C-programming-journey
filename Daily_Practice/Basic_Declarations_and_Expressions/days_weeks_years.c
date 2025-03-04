#include <stdio.h>

int main() {
    int convert;
    printf("Enter number of days:");
    scanf("%d", &convert);

    int years = convert / 365;
    int remainder = convert % 365;
    printf("Years: %d\n", years);

    int weeks = remainder / 7;
    int remainder2 = remainder % 7;
    printf("Weeks: %d\n", weeks);

    int days = remainder2;
    printf("Days: %d", days);
    return 0;
}
