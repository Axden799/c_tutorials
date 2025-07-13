#include <stdio.h>
#include <stdlib.h>

void sayHi(char name[], int age) {
    printf("Hello %s. Your age is %d\n", name, age);
}

int max(int num1, int num2) {
    int result;
    if (num1 > num2) {
        result = num1;
    } else {
        result = num2;
    }

    return result;
}

// function prototype lets us fill in the function after main().
double cube(double num);

int main() {
    // if a string decomposes to a pointer, how do I edit only the value of a string in C?
    char name[100] = "Denis";
    int age = 28;
    sayHi(name, age);

    // why can't I redefine name?
    // name = "Charlotte";
    strcpy(name, "Charlotte");
    // int age = 27;
    age = 27;
    sayHi(name, age);

    // name = "Gian";
    strcpy(name, "Gian");
    // int age = 30;
    age = 30;
    sayHi(name, age);

    printf("Answer: %f\n", cube(7.0));

    printf("Max: %d\n", max(10, 50));
    printf("Max: %d\n", max(100, 50));

    return 0;
}

double cube(double num) {
    double result = num* num* num;
    return result;
}