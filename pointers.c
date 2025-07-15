#include <stdio.h>
#include <stdlib.h>

int main() {

    int x = 10;
    int *Px = &x;

    printf("Value of x: %d\n", x);
    printf("Address of x: %p\n", &x);
    printf("Value of x using Px: %d\n", *Px);
    printf("Address of x using Px: %p\n", Px);

    return 0;
}