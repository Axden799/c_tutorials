#include <stdio.h>
#include <stdlib.h>

int main() {

    char name[30];

    // the problem with using scanf here is my full name requires a space. 
    // scanf terminates after a space, so inputting a space will put my last name as my age!
    // We can use fgets to avoid this. Usually we use fgets instead of scanf for strings.
    printf("Enter your full name: ");

    // get input from stdin input buffer
    fgets(name, 30, stdin);

    int age;
    printf("Enter your age: ");
    // for scanf, you need to use a pointer, so we get the address of age to store the age not the variable itself.
    // the scanf function, like all C functions, requires the pointer to the address of the variable to modify it.
    // C cannot modify values (copies of the data at this address) directly because once the function exits the
    // original value of the variable will not be changed. Hence for all C functions, we must use pointers.
    scanf("%d", &age);

    double gpa;
    printf("Enter your gpa: ");
    scanf("%lf",  &gpa);

    char grade;

    printf("Enter your grade: ");
    scanf("%c", &grade);

    printf("Your name is %s. You are %d years old and your gpa is %f. This means your grade is %c", name, age, gpa, grade);

    return 0;

}