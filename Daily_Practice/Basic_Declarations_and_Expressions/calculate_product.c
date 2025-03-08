#include <stdio.h>

int main () {
    int int1, int2;
    printf("Enter two integers:\n");
    scanf("%d %d", &int1, &int2);

    int product = int1 * int2;
    printf("The product of %d * %d is: %d\n", int1, int2, product);
}