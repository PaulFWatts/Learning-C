/* Solution to Problem: 11 | Pass by value
 *
 * Test a given number to see if it is a Palindrome using a function
 * called isNumberPalindrome() that takes a number as a parameter and
 * returns true if the number is a palindrome and false otherwise.

    Author: Paul Watts
    Date:   10th September 2022

*/

#include <stdio.h>
#include <stdbool.h>

bool isNumberPalindrome(int number)
{
    int temp; // Used to store the original number
    int r = 0; // Used to store the remainder
    int sum = 0; // Used to store the sum of the digits

    temp = number; // Store the original number

    while (number > 0)
    {
        r = number % 10; // Get the remainder
        sum = (sum * 10) + r; // Add the remainder to the sum
        number = number / 10; // Divide the number by 10
    }

    if (temp == sum)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main(void)
{
    int number = 0; // The number to be tested

    printf("Please enter a number: ");
    scanf("%d", &number);

    if (isNumberPalindrome(number))
    {
        printf("%d is a palindrome\n", number);
    }
    else
    {
        printf("%d is not a palindrome\n", number);
    }

    return 0;
}
