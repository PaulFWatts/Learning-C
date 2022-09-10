/* Solution to Problem: 6| Sum of even and odd integers
 *
 * Write a program that reads a series of integers and then displays the sum
 * of all the even integers and the sum of all the odd integers.
 *

    Author: Paul Watts
    Date:   10th September 2022

*/

#include <stdio.h>

int main(void)
{
    int number = 0; // The number to be tested
    int even = 0; // The sum of the even numbers
    int odd = 0; // The sum of the odd numbers

    printf("Please enter a series of integers, enter 0 to end:\n");

    do
    {
        scanf("%d", &number);

        if (number == 0)
        {
            break;
        }
        else if (number % 2 == 0)
        {
            even = even + number;
        }
        else
        {
            odd = odd + number;
        }

    } while (number != 0);

    printf("The sum of the even numbers is %d and the sum of the odd numbers is %d\n", even, odd);

    return 0;
}
