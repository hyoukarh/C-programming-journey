#include <stdio.h>

int main () {
    int sum1;
    int sum2;
    printf("Enter two sums to be calculated:"); // Prompts user to enter two integers.
    scanf("%d %d", &sum1, &sum2); // Stores the users input.
    printf("%d + %d = %d", sum1, sum2, sum1 + sum2); // calculates and output the sum of two integers.
    return 0;
}