#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 30, d = 40;
    if (a <= b == d > c) { // shows the associativity of the relational operators.
        printf("True\n");
    } else {
        printf("False\n");
    }

    int d = 5, e = 10, f = 15;
    printf("%d + %d * %d = %d\n", d, e, f, d + e * f); // shows the precedence of the multiplication operator over the addition operator.
    printf("(%d + %d) * %d = %d\n", d, e, f, (d + e) * f); // shows the precedence of the parentheses over the multiplication operator.
    printf("%d / %d * %d = %d\n", f, e, d, f / e * d); // shows the associativity of the division and multiplication operators.
    return 0;
}