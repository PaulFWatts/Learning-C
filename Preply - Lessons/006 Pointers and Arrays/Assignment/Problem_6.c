/* Solution to Problem: 6 | Arrays 1

    Author: Paul Watts
    Date:   17th September 2022

*/

#include <stdio.h>

int main(void)
{
    // Write a C program that declares an array alpha of 60 components of type double.
    // Initialize the array so that the first 20 components are equal to the square of the index variable,
    // and the next 20 components are equal to three times the index variable.
    // Last 20 elements are the sum of first 20 and last 20 indices.
    // Output the array so that 10 elements per line are printed.

    double alpha[60];
    int i;


    for (i = 0; i < 20; i++)
    {
        alpha[i] = i * i;
    }

    for (i = 20; i < 40; i++)
    {
        alpha[i] = 3 * i;
    }

    for (i = 40; i < 60; i++)
    {
        alpha[i] = alpha[i - 20] + alpha[i - 40];
    }

    for (i = 0; i < 60; i++)
    {
        printf("%f ", alpha[i]);
        if ((i + 1) % 10 == 0) // Print 10 elements per line
        {
            printf("\n");
        }
    }

    return 0;
}

