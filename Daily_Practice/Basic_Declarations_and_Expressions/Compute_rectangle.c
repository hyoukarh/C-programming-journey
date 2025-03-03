#include <stdio.h>

int main() {
    int height;
    int width;
    printf("Please enter height and width:\n");
    scanf("%d  %d", &height, &width);
    
    int perimeter = 2;
    int result = perimeter * (height + width);
    printf("The perimeter of a rectangle is %d * (%d + %d) which is: %d\n", perimeter, height, width, result);
    
    int area = height * width;
    printf("The area of a rectangle is %d * %d which is: %d", height, width, area);
    return 0;
}
