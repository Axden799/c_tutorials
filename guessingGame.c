#include <stdio.h>
#include <stdlib.h>

int main() {

    int answer = 50;
    int guess;
    int guessCount = 3;
    int hasWon = 0;

    while (guess != answer && guessCount > 0) {
        printf("Guess the number to win the guessing game: ");
        scanf("%d", &guess);
        guessCount--;

        if (guess == answer) {
            hasWon = 1;
        }
    }

    if (!hasWon) {
        printf("You lost! You ran out of guesses. The answer was %d", answer);
    } else {
        printf("You won!");
    }

    return 0;

}