/* Solution to Problem: 13 | Guess-the-Number Game 

    Author: Paul Watts
    Date:   10th September 2022

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/* This Function randomly generates a number in
    the range [1, limit] and compares this number to the guessed number
    from the user.
*/

void guess(int limit)
{
    int number, guess, numberofguess = 0;
    time_t t;

    srand((unsigned) time(&t)); // Use current time to seed the random number generator

    // Generate a random number
    number = rand() % limit;
    // printf("The number is %d\n", number); // uncomment for debugging

    printf("Please type your first guess:  ");

    /*
        Keep looping until the player guesses the correct number
     */
    do {

        scanf("%d", &guess); // Input by user


        if (guess > number)

        {
            printf("Too high. Try again:  ");
            numberofguess++;
        }

        else if (number > guess)

        {
            printf("Too low. Try again: ");
            numberofguess++;
        }


        else
            printf("Excellent! You guessed the number in %d attempts!\n", numberofguess);

    } while (guess != number);
}

// Driver Code
int main()
{
    int limit = 1000; // Set the upper limit of our range

    printf("I have a number between 1 and %d\n", limit);
    printf("Can you guess my number?\n");

    // Function call
    guess(limit);

    return 0;
}
