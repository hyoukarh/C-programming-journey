#include <stdio.h>

int main() {
    char c = 255;
    c = c + 10;
    printf("%d\n", c); // prints the value of c.
    printf("%s", "Hello\n");
    printf("%10s", "Hello\n"); // prints the string with a width of 10 characters.
    return 0;
}
