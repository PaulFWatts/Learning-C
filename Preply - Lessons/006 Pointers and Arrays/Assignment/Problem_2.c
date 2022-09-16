/* Solution to Problem: 2 | Arrays 1 Dimensional

    Author: Paul Watts
    Date:   17th September 2022

*/

#include <stdio.h>

int main(void)
{
    // Write a program to initialize array of size 10 in single statement. Then find there sum and print numbers
    // in reverse order.

    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum = 0;

    for (int i = 0; i < 10; i++)
    {
        sum += array[i];
    }

    printf("The sum of the array is %d and the numbers in reverse order are: \n", sum);

    for (int i = 9; i >= 0; i--)
    {
        printf(" %d ", array[i]);
    }

    return 0;
}

