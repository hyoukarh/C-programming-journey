#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 0;
    int max = (a > b) ? a : b; // Ternary operator to find the max number.
    printf("The max number is: %d\n", max);

    if (a && c) {
        printf("Both return a value of 1\n");
    } else {
        printf("Only a or b has a value of 1\n");
    }

    int var = 75, var2 = 56;
    int num = sizeof(var) ? (var2 > 23 ? ((var == 75) ? 'A' : 0) : 0) : 0; // Nested ternary operator to find the value of num.
    printf("%d", num);
    return 0;
}
