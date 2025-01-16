#include <stdio.h> /*include the standard input/output header file (stdio.h)*/

int main() /*Entry point of the program*/
{
    int var = 10; /*Variable declaration and initialization*/
    var = 7; /*Variable reassignment*/
    int var2, var3, var4; /*Multiple variable declaration*/
    var2 = var3 = var4 = 5; /*Multiple variable initialization*/
    printf("%d\n", var); //Print the value of the variable to the console
    printf("%d", var2); //Print the value of the variable to the console
    printf("%d", var3); //Print the value of the variable to the console
    printf("%d", var4); //Print the value of the variable to the console
    return 0; /*Return 0 to the operating system to indicate successful completion of the program*/
}
