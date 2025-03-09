#include <stdio.h>

int main() {
    int age = 18;
    if (age >= 18) {
        printf("You're eligible to vote\n");
    } else {
        printf("You're not eligible to vote\n");
    }

    int num = 5;
    if (num == 6) {
        printf("num is 6\n");
    } else {
        num++;
        printf("The value of num is now: %d\n", num);
    }

    int grade = 70;
    if (grade >= 90) {
        printf("Your grade is A");
    } else if (grade >= 80) {
        printf("Your grade is B");
    } else if (grade >= 70) {
        printf("Your grade is C");
    } else {
        printf("Your grade is F");
    }

    int day;
    printf("Enter day:\n");
    scanf("%d", &day);
    switch (day)
    {
    case 1:
        printf("Day is monday");
        break;
    case 2: 
        printf("Day is Tuesday");
        break;
    case 3:
        printf("Day is Wednesday");
        break;
    case 4:
        printf("Day is Thursday");
        break;
    case 5:
        printf("Day is Friday");
        break;
    case 6:
        printf("Day is Saturday");
        break;
    case 7:
        printf("Day is Sunday");
        break;
    default:
        printf("Invalid day");
        break;
    }
    return 0;
}