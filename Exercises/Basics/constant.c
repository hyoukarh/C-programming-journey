#include <stdio.h>
#define add(x, y) x+y
#define greater(x, y) if (x < y) \
                        printf("%d is greater than %d\n", y, x); \
                    else \
                        printf("%d is greater than %d\n", x, y);

int main() {
    greater(7, 8);
    const int var = 10; // constant variable, read only and can not be changed.
    printf("The value of var: %d\n", var);
    printf("The value of add(x, y): %d\n", add(2, 3));
    printf("Todays date is: %s\n", __DATE__);
    printf("The Time is: %s\n", __TIME__);
    return 0;
}
