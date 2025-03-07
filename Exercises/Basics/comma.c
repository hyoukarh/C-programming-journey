#include <stdio.h>

int main () {
    int a;
    a = 3, 4, 5; // The value of a is 3, not 5 because the comma operator has a lower precedence than the assignment operator i.e (a = 3), 4, 5;
    printf("%d\n", a);

    //int b = 3, 4, 5; // Will throw an error because the comma operator is acting as a separator and not as an operator.
    //printf("%d", b);

    int c = (3, 4, 5); // The value of c is 5 because the parenthesis has a higher precedence than the equal operator.
    printf("%d\n", c);

    int var, num;
    num = (var = 15, var+35);
    printf("%d\n", num); // The value of num is 50.
    return 0;
}
