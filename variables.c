#include <stdio.h>
#include <stdlib.h>

int main() {

    char characterName[] = "Denis";
    int characterAge = 28;
    printf("There was once a man named %s\n", characterName);
    printf("he was %d years old.\n", characterAge);

    characterAge = 30;
    printf("He really liked the name %s\n", characterName);
    printf("but did not like being %d.\n", characterAge);

    return 0;
}