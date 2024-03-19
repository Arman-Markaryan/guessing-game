#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int rng, guess;
    srand(time(0));
    rng = rand() % 100;

    printf("Welcome to GuessThatNumber!\n");
    printf("You'll be guessing numbers between ZERO and NINTYNINE\n");

    do {
        printf("Input your answer: ");
        scanf("%d", &guess);

        if (guess < rng) {
            printf("Your guess is too low. Try again!\n");
        } else if(guess > rng) {
            printf("Your guess it too high. Try again!\n");
        } else {
            printf("Hey look at that! You've guessed correctly! The correct number was: %d\n", rng);
        }
    } while (guess != rng);
    
    return 0;
}