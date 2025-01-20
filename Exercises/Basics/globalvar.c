#include <stdio.h>

int call_var(); // Function prototype.
int global_var = 80; // global variable that can be called anywhere in the program.

int main() {
    int global_var = 70;
    printf("%d\n", global_var); // Prints the local variable.
    call_var(); // Calls the call_var function.
    return 0;
}

int call_var() {
    printf("%d\n", global_var); // Prints the global variable.
    return 0;
}