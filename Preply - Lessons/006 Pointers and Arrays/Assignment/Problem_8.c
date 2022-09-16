/* Solution to Problem: 8 | Arrays 1 dimensional, Duplicate Elimination

    Author: Paul Watts
    Date:   17th September 2022

*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
// Use a one-dimensional array to solve the following problem. Read in 25 numbers,
// each of which is between 10 and 100, inclusive.
// As each number is read, validate it and store it in the array only if it isn’t a duplicate
// of a number already read. After reading all the values, display only the unique values
// that the user entered. Provide for the “worst case” in which all 25 numbers are different.
// Use the smallest possible array to solve this problem.

    int array[25];
    int i = 0;
    int j = 0;

    for (i = 0; i < 25; i++)
    {
        printf("Enter a number between 10 and 100: ");
        scanf("%d", &array[i]);
        if (array[i] < 10 || array[i] > 100)
        {
            printf("Invalid number, please try again. ");
            i--;
        }
        for (j = 0; j < i; j++)
        {
            if (array[i] == array[j])
            {
                printf("Duplicate number, please try again. ");
                i--;
            }
        }
    }
    printf(" The unique numbers are: ");
    for (i = 0; i < 25; i++)
    {
        printf(" %d ", array[i]);
    }

    return 0;
}

