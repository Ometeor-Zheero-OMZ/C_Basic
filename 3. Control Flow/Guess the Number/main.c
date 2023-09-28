#include <stdio.h>
#include <stdlib.h>
#include <time.h> // for random number generator seed

int main() {
    int randomNumber = 0;
    int guess = 0;
    int maximumNumberOfGuesses;
    time_t t;

    // initilization of random number generator
    srand((unsigned) time(&t));

    // get the random number
    randomNumber = rand() % 21;

    printf("\nThis is a guessing game.");
    printf("\nI have chosen a number between 0 and 20, which you must guess. \n");

    for(maximumNumberOfGuesses = 5; maximumNumberOfGuesses > 0; --maximumNumberOfGuesses)
    {
        printf("\nYou have %d tr%s left.", maximumNumberOfGuesses, maximumNumberOfGuesses == 1 ? "y" : "ies");
        printf("\nEnter a guess: ");
        scanf("%d", &guess);

        if(guess == randomNumber)
        {
            printf("\nCongraturations. You guessed it!\n");
            break;
        }
        else if(guess < 0 || guess > 20) // checking for an invalid guess
            printf("I said the number is beween 0 and 20.\n");
        else if(randomNumber > guess)
            printf("Sorry, %d is wrong. My number is greater than that.\n", guess);
        else if(randomNumber < guess)
        printf("Sorry, %d is wrong. My number is less thant that.\n", guess);
    }

    // output the failure message when you try fifth times.
    if(maximumNumberOfGuesses <= 0)
        printf("\nYou have had five tries and failed. The number was %d\n", randomNumber);

    return 0;
}
