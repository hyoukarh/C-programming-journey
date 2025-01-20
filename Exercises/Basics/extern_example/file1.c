#include <stdio.h>

extern int a; // External variable declaration.

int main() {
    printf("%d\n", a); // Prints the value of a.
    return 0;
}
// This program demonstrates how external variables work.

// Used the 'gcc file1.c file2.c -o extern_example' command to compile the program.
// Used the './extern_example' command to run the program.