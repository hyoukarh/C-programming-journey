#include <stdio.h>

int main() {
    int exceedrange_max = 2147483648;
    int exceedrange_min = -2147483649;
    printf("When you exceed the maximum positive range of a signed integer, you get: %d\n", exceedrange_max); // prints the value of the variable exceedrange_max to the console.
    printf("When you exceed the minimum negative range of a signed integer, you get: %d\n", exceedrange_min); // prints the value of the variable exceedrange_min to the console.
    return 0;
}
