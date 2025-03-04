#include <stdio.h>

int main() {
    int a = 1, b = 0;
    printf("%d && %d: %d\n", a, b, a && b); // Returns a boolean value of 1 only when both operands have 1.
    printf("%d || %d: %d\n", a, b, a || b); // Returns a boolean value of 1 when atleast one operand has 1.
    printf("!%d: %d\n", b, !b); // Returns the opposite of the operand.

    int c = 5, d = 2;
    if (a > b && d < c && c > a) {
        printf("This statement is True.\n");
    } else {
        printf("This statement is False.\n");
    }

    if (a > c || c <= b || c >= a) {
        printf("This statement is True.\n");
    } else {
        printf("This statement is False.\n");
    }
    return 0;
}