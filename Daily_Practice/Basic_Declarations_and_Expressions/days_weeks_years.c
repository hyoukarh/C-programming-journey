#include <stdio.h>

int main() {
    int totaldays; // Variable to store the users input.
    printf("Enter number of total-days:"); // prompt to enter total days. 
    scanf("%d", &totaldays); // Stores the users input to the address.

    int years = totaldays / 365; // Calculates the total number of years.
    int remainder = totaldays % 365; // Calculates the remainder of the total days.
    printf("Years: %d\n", years); // Outputs the total number of years.

    int weeks = remainder / 7; // Calculates the total number of weeks.
    int remainder2 = remainder % 7; // Calculates the remainder of the weeks.
    printf("Weeks: %d\n", weeks); // Outputs the total number of weeks.

    int days = remainder2; 
    printf("Days: %d", days); // Outputs the total number of days.
    return 0;
}
