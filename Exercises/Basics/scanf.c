#include <stdio.h>

int main() {
    int age;
    float height;
    char name[50];

    printf("Please enter your name, age, and height: ");
    scanf("%s %d %f", name, &age, &height);

    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Height: %.2f\n", height);
    return 0;
}