/* Solution to Problem: 3 | Arrays 1 dimensional, Random Numbers

    Author: Paul Watts
    Date:   17th September 2022

*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
// Write a program to initialize 200 random numbers using array. Display all numbers with
// proper spaces and line break after 10 numbers.

    int array[200];

    for (int i = 0; i < 200; i++)
    {
        array[i] = rand();
    }

    for (int i = 0; i < 200; i++)
    {
        printf(" %d ", array[i]);
        if (i % 10 == 0) // This is a new line every 10 numbers
        {
            printf("\n");
        }
    }
    return 0;
}

