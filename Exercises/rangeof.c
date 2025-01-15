#include <stdio.h>
#include <limits.h>

int main() {
    int min = INT_MIN;
    int max = INT_MAX;
    unsigned int umin = 0;
    unsigned int umax = UINT_MAX;
    signed int shrtmin = SHRT_MIN;
    signed int shrtmax = SHRT_MAX;
    unsigned int ushrtmin = 0;
    unsigned int ushrtmax = USHRT_MAX;
    long int lngmin = LONG_MAX;
    long int lngmax = LONG_MIN;
    unsigned long int ulngmin = 0;
    unsigned long int ulngmax = ULONG_MAX;
    printf("The range of a signed integer is from %d to %d\n", min, max); // prints the range of a signed integer using the limits.h header file.
    printf("The range of an unsigned integer is from %u to %u\n", umin, umax); // prints the range of an unsigned integer using the limits.h header file.
    printf("The range of a signed short integer is from %d to %d\n", shrtmin, shrtmax); // prints the range of a signed short integer using the limits.h header file.
    printf("The range of an unsigned short integer is from %u to %u\n", ushrtmin, ushrtmax); // prints the range of an unsigned short integer using the limits.h header file.
    printf("The range of a signed long integer is from %ld to %ld\n", lngmin, lngmax); // prints the range of a signed long integer using the limits.h header file.
    printf("The range of an unsigned long integer is from %lu to %lu\n", ulngmin, ulngmax); // prints the range of an unsigned long integer using the limits.h header file.
}
