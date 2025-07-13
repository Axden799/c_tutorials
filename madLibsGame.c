#include <stdio.h>
#include <stdlib.h>

int main() {

    char color[20];
    char pluralNoun[50];
    char celebrity[100];

    // When getting input for a string, we do not need to pass in the address operator (&).
    // ARRAYS DECAY TO POINTERS!!!!
    printf("Enter a color: ");
    scanf("%s", color);

    printf("Enter a plural noun: ");
    scanf("%s", pluralNoun);

    printf("Enter a celebrity name: ");

    // Using sizeof  is safer than using the hard-coded value of the size of celebrity string.
    // this still does not work because the \n newline character from the previous inputs is passed into fgets
    // from the input buffer. This causes the program to skip fgets since it thinks you entered a newline.
    // to stop this, we must clear the input buffer of new lines before we get here
    int c;

    // eats all characters in the input stream iteratively until it reaches newline \n or EOF character (typically -1)
    // when this happens, the loop terminates, effectively consuming the input buffer characters gatherered from getchar().
    while ((c = getchar() != '\n' && c != EOF));
    fgets(celebrity, sizeof(celebrity), stdin);
    // scanf("%s", celebrity);

    printf("Roses are %s\n", color);
    printf("%s are blue\n", pluralNoun);
    printf("I love %s\n", celebrity);

    return 0;
}