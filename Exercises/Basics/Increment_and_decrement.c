#include <stdio.h>

int main() {
    int x = 5;
    int y = ++x;
    printf("The value of y after the prefix increment is: %d\n", y);

    int z = y++;
    printf("The value of why z is: %d, and the value of y after the postfix increment is: %d\n", z, y);

    y = --z;
    printf("The new value of y is: %d and z is: %d\n", y, z);
    
    x = y--;
    printf("The new value of x is: %d, and y: %d", x, y);
}