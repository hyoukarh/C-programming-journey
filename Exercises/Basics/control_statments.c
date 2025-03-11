#include <stdio.h>

int main() {
    int a;
    for (a = 1; a <= 10; a++) {
        if (a == 5) {
            break;
        }
        printf("a is: %d\n", a);
    }

    int b = 1;
    while (b <= 10) {
        b++;
        if (b % 2 == 0) {
            continue;
        }
        printf("b is: %d\n", b);
    }
}