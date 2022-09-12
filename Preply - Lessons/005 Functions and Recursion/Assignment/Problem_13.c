/* Solution to Problem: 13 | Guess-the-Number Game 

    Author: Paul Watts
    Date:   10th September 2022

*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>


/* This Function randomly generates a number in
    the range [1, limit] and compares this number to the guessed number
    from the user.
*/

void guess(int limit)
{
    int number = 0; // The number to be guessed
    int guess = 0; // The user's guess
    int guess_total = 0; // The total number of guesses

    time_t t; // Used to seed the random number generator

    srand((unsigned) time(&t)); // Use current time to seed the random number generator

    // Generate a random number
    number = rand() % limit;
    // printf("The number is %d\n", number); // uncomment for debugging

    printf("Please type your first guess: ");

    /*
        Keep looping until the player guesses the correct number
     */
    do {

        scanf("%d", &guess); // Input by user
        guess_total++; // Increment the number of guesses

        if (guess > number)

        {
            printf("Too high. Try again:  ");
        }

        else if (number > guess)

        {
            printf("Too low. Try again: ");
        }


        else
            printf("Excellent! You guessed the number in %d attempts!\n", guess_total);


    } while (guess != number);
}

// Driver Code
int main()
{
    int limit = 1000; // Set the upper limit of our range
    bool play_again = true; // Flag to play again
    char play_again_response = 'y'; // The user's response to play again

    printf("I have a number between 1 and %d\n", limit);
    printf("Can you guess my number?\n");

    // Function call
    while (play_again == true)
    {
        guess(limit);

        printf("Would you like to play again? (y or n):  ");
        scanf(" %c", &play_again_response);

        if (play_again_response == 'y')
            play_again = true;
        else
            play_again = false;
    }

    return 0;
}
