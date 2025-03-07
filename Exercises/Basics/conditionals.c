#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 0;
    int max = (a > b) ? a : b;
    printf("The max number is: %d\n", max);

    if (a && c) {
        printf("Both return a value of 1\n");
    } else {
        printf("Only a or b has a value of 1\n");
    }
    return 0;
}