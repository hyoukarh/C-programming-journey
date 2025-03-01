#include <stdio.h>

int main() {
    int age;
    float height;
    char name[50];

    printf("Please enter your name, age, and height: ");
    scanf("%s %d %f", name, &age, &height); // The scanf function is used to read the input from the user. The %s, %d, and %f are format specifiers that are used to read the string, integer, and float values respectively.

    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Height: %.2f\n", height);
    return 0;
}