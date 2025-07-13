#include <stdio.h>
#include <stdlib.h>

// hardware and compiler differences may change the sizes of some of the data types.

int main() {

    // int is 4 bytes (32 bits), between -2,147,483,648 to 2,147,483,647. guaranteed to be at least 2 bytes.
    int age = 40;

    // at least 2 bytes (16 bits), between -32,768 to 32,767
    short toasters = 25;

    // at least 4 bytes, but typically 8. can be signed or unsigned
    long cars = 5000550;

    // at least 8 bytes or more. can be signed or unsigned
    long long people = 5453456134;

    // does not allow negative values, but doubles the positive values. Range is 0 to 4,294,967,295
    unsigned int coins = 500;

    // does not allow negative values, but doubles the positive values. Range is 0 to 255.
    unsigned char letter = 'F';

    // Stores single-precision floating-point numbers. Typically 4 bytes (32 bits) and 6-7 decimal digits of precision
    float balance = 23.8;

    // stores double-precision floating-point numbers. Typically 8 bytes (64 bits) and 15-17 decimal digits of precision
    double gpa = 4.0;

    // at least 10 bytes often 12 or 16, 18-19 decimal places or more. Larger exponent range.
    long double revenue =  23453465.45738;

    // char stores 1 byte (8 bits), between -128 to 127 in value
    char grade = 'A';

    // special data type that is a combination of characters
    char phrase[] = "My name is Denis";

    return 0;
}