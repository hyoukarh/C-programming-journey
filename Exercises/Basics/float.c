#include <stdio.h>
#include <float.h>

int main() {
    float a = 3.1415987543479654364;
    double b = 3.656586439654983256;
    long double c = 3.1415987543479654364876876654838374747;
    printf("The size of float is: %d Bytes\n", sizeof(float)); 
    printf("The size of double is: %d Bytes\n", sizeof(double));
    printf("The size of long double is: %d Bytes\n", sizeof(long double));
    printf("The minimum negative float value is: %e,\n and the maximum positive value is: %e\n", FLT_MIN, FLT_MAX); // prints the minimum and maximum float values using the float.h header file.
    printf("The minimum negative double value is: %e,\n and the maximum positive value is: %e\n", DBL_MIN, DBL_MAX); // prints the minimum and maximum double values using the float.h header file.
    printf("The minimum negative long double value is: %Le,\n and the maximum positive value is: %Le\n", LDBL_MIN, LDBL_MAX); // prints the minimum and maximum long double values using the float.h header file.
    printf("The value of a is %.16f\n", a); // Depicts the precision of the float value.
    printf("The value of b is %.18f\n", b); // Depicts the precision of the double value.
    printf("The value of c is %.21Le\n", c); // Depicts the precision of the long double value.
    return 0;
}
