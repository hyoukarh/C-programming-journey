#include <stdio.h>

int main() {
    int a = 10, b = 5;
    printf("%d == %d: %d\n", a, b, a == b); // 0 for false statements.
    printf("%d >= %d: %d\n", a, b, a >= b); // 1 for true statements.

    if(a <= b) {
        printf("%d is less than %d\n", a, b);
    } else {
        printf("%d is not less than or equal to %d\n", a, b);
    }
    return 0;
}
