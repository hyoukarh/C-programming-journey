#include <stdio.h>
#include <string.h>

int main() {
    char str[50];
    printf("Please enter three letters:");
    fgets(str, sizeof(str), stdin);

    int length = strlen(str);
    int i = 0;
    int j = length - 1;

    while (i < j) { // Swapping the letters.
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }

    printf("Reversed string: %s\n", str);
    return 0;
}