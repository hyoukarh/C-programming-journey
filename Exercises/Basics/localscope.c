#include <stdio.h>

int main() {
    int local_var = 80;
    {
        int local_var = 90; // local variable that can only be called within its scope.
        printf("%d\n", local_var); // Prints the local variable of the inner function due to variable shadowing.
    }
    printf("%d\n", local_var); // local variable that can only be called within its scope.
    return 0;
}

//int call_var() {
//    printf("%d\n", local_var); // An error occurred because local_var is not defined in this scope.
//    return 0;
//}
