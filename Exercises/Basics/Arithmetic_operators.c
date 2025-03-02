#include <stdio.h>

int main() {
    int a = 10, b = 5, c =7;
    int add = a + b + c;
    printf("%d + %d + %d will give you: %d\n", a, b, c, add);

    int divide = add / a;
    printf("%d / %d is equal to: %d\n", add, a, divide);

    int mul = divide * add;
    printf("%d * %d is equal to: %d\n", divide, add, mul);

    int mod = mul % c;
    printf("%d modulo %d is: %d\n", mul, c, mod);

    int associavity = a * b + a / b - c;
    printf("%d * %d + %d / %d - %d is equal to: %d\n", a, b, a, b, c); // Shows how associavity works.
    return 0;
}