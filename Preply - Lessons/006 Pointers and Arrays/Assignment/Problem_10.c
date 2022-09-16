/* Solution to Problem: 10 | Dice rolling

    Author: Paul Watts
    Date:   17th September 2022

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
// Write a program that simulates the rolling of two dice.
// The program should use rand to roll the first die and should use rand again to roll the second die.
// The sum of the two values should then be calculated.
// [Note: Each die can show an integer value from 1 to 6, so the sum of the two values will vary
// from 2 to 12, with 7 being the most frequent sum and 2 and 12 being the least frequent sums.]
// Your program should roll the two dice 1,000 times. Use a one-dimensional array to tally the
// numbers of times each possible sum appears. Print the result count.

    int dice1, dice2, sum, i;
    int tally[13] = {0};

    srand(time(NULL)); // Seed the random number generator

    for (i = 0; i < 1000; i++)
    {
        dice1 = (rand() % 6) + 1;
        dice2 = (rand() % 6) + 1;
        sum = dice1 + dice2;
        tally[sum]++;
    }

    for (i = 2; i < 13; i++)
    {
        printf("Sum %d: %d times \n", i, tally[i]);
    }



    return 0;
}

