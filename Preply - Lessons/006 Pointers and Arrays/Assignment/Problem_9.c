/* Solution to Problem: 9 | Shifting Array

    Author: Paul Watts
    Date:   17th September 2022

*/

#include <stdio.h>

int main(void)
{
    // Write a program that will be given as input an array and an integer p.
    // The program will then cyclically shift the array p positions to the right:
    // each element is moved p positions to the right, while the last p elements are moved to the
    // beginning of the array. For example: if we have the array [1 2 3 4 5 6],
    // shifting 2 positions to the right should give the array [5 6 1 2 3 4].
    // Your function should work correctly for negative values of p.

    int array[6] = {1, 2, 3, 4, 5, 6};
    int p = 2;
    int temp[6];

    for (int i = 0; i < 6; i++)
    {
        temp[i] = array[i]; // Copy the array to a temporary array
    }

    for (int i = 0; i < 6; i++)
    {
        if (i + p < 6)
        {
            array[i + p] = temp[i]; // Shift the array p positions to the right
        }
        else
        {
            array[i + p - 6] = temp[i]; // Shift the array p positions to the right
        }
    }

    for (int i = 0; i < 6; i++)
    {
        printf(" %d ", array[i]); // Print the array
    }


    return 0;
}

