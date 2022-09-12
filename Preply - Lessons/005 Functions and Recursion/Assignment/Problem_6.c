/* Solution to Problem: 6| Palindrome
 *
 * Enter a five digit integer and determines whether it's a palindrome
 * or not. A palindrome is a number that reads the same backward as
 * forward. For example, 12321 is a palindrome.

    Author: Paul Watts
    Date:   10th September 2022

*/

#include <stdio.h>

int main(void)
{
    int number = 0; // The number to be tested
    int temp; // Used to store the original number
    int r = 0; // Used to store the remainder
    int sum = 0; // Used to store the sum of the digits

    printf("Please enter a five digit number: ");
    scanf("%d", &number);

    temp = number; // Store the original number

    while (number > 0)
    {
        r = number % 10; // Get the remainder
        sum = (sum * 10) + r; // Add the remainder to the sum
        number = number / 10; // Divide the number by 10
    }

    if (temp == sum)
    {
        printf("%d is a palindrome\n", temp);
    }
    else
    {
        printf("%d is not a palindrome\n", temp);
    }

    return 0;
}
