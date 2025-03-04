#include <stdio.h>

int main() {
    int a = 125, b = 12345;
    long ax = 1234567890;
    short s = 4043;
    float x = 2.13459;
    double dx = 1.1415927;
    char c = 'W';
    unsigned long ux = 2541567890;
    printf("%d + %c = %d\n", a, c, a + c);
    printf("%.6f + %c = %f\n", x, c, x + c);
    printf("%.7f + %.5f = %f\n", dx, x, dx + x);
    return 0;
}
