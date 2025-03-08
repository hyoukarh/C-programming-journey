#include <stdio.h>

int main() {
    int weight_item1, weight_item2;
    float item1, item2;
    printf("Enter values:\n");
    scanf("%d %d %f %f", &weight_item1, &weight_item2, &item1, &item2);

    int totalweight1 = weight_item1 * item1;
    int totalweight2 = weight_item2 * item2;
    int cumuweight = totalweight1 + totalweight2;
    int totalitems = item1 + item2;
    float averagevalue = cumuweight / totalitems;

    printf("The average value is: %.6f\n", averagevalue);
    return 0;
}