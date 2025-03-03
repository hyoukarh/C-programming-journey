#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

int main() {
    int radius;
    printf("Enter Radius:");
    scanf("%d", &radius);

    float perimeter = 2 * PI * radius;
    printf("The perimeter of a circle is: %.6f\n", perimeter);

    float area = PI * pow(radius, 2);
    printf("Area of a circle is: %.6f", area);
}
