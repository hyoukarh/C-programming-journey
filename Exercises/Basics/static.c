#include <stdio.h>

int increment(); // Function prototype for the function increment().
int main() {
    int value1 = increment(); // The value of the variable value1 is set to the return value of the function increment().
    int value2 = increment(); // The value of the variable value2 is set to the return value of the function increment().
    int value3 = increment(); // The value of the variable value3 is set to the return value of the function increment().
    printf("%d %d %d\n", value1, value2, value3); // The values of the variables value1, value2, and value3 are printed.
    return 0;
}

int increment() {
    static int i = 1; // static keyword is used to store the variable in the data segment of the memory. It is used to retain the value of the variable between function calls.
    return i++;
}
