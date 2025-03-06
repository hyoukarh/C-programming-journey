#include <stdio.h>

int main() {
    int a = 4, b = 5;
    printf("%d & %d = %d\n", a, b, a & b); // performs bitwise AND operation and reurns 1 if both bits are 1.
    printf("%d | %d = %d\n", a, b, a | b); // performs bitwise OR operation and reurns 1 if either of the bits are 1.
    printf("%d ^ %d = %d\n", a, b, a ^ b); // performs bitwise XOR operation and reurns 1 if both bits are different.
    printf("~%d = %d\n", a, ~a); // performs bitwise NOT operation and reurns the opposite of the number.
    printf("%d << 1 = %d\n", a, a << 1); // performs bitwise left shift operation and shifts the bits to the left by 1.
    printf("%d >> 1 = %d\n", a, a >> 1); // performs bitwise right shift operation and shifts the bits to the right by 1.
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("a = %d, b = %d\n", a, b); // Swapping two numbers using XOR operation.
    return 0;
}
