#include <stdio.h>

int main() {
    register int i; // register keyword is used to store the variable in the CPU register. It is used to speed up the access to the variable.
    for (i = 0; i < 10; i++) { // A for loop that checks if the variable i is less than 10, and if it is, it prints the value of i and increments it by 1.
        printf("%d\n", i); 
    }
    return 0;
}
