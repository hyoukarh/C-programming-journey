#include <stdio.h>

int main() {
    int a = 5;
    while (a >= 0) {
        printf("a is: %d\n", a);
        a--;
    }

    for (int b = 1; b <= 3; b++) {
        for (int c = 1; c <= 3; c++) {
            printf("%d %d\n", b, c);
        }
    }

    int d;
    do {
        printf("Enter an integer:\n");
        scanf("%d", &d);
    } while (d != 0);

    printf("You've escaped the loop\n");
    
    return 0;
}
