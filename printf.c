#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    // omitting the newline \n key may cause random characters like [1] to be printed at the end. Always end with \n
    // at the end of a line!
    printf("My favorite %s is \"%f\".\n", "number", 7.09867 + 10.987);

    //pow expects type double so %d gave me a warning instead of %f.
    printf("8 to the power of 6 is %f\n", pow(8,6));

    // double num = 56.4343;

    // printf("Ceiling of %d is %d\n", num, ceil(num));

    // num = 924.2341;

    // printf("Floor of %d is %d\n", num, floor(num));

    return 0;
}