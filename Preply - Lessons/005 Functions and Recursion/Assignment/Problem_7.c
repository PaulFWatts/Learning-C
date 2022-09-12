/* Solution to Problem: 7| Calculate the decimal equivalent of a Binary number
 *
 * Write a program that asks the user to enter a binary number (base 2) and
 * then displays its decimal equivalent (base 10).

    Author: Paul Watts
    Date:   10th September 2022

*/

#include <stdio.h>

int main(void)
{
    int binary = 0; // The binary number to be converted
    int decimal = 0; // The decimal equivalent of the binary number
    int temp = 0; // Used to store the binary number
    int remainder = 0; // Used to store the remainder
    int base = 1; // Used to store the base

    printf("Please enter a binary number: ");
    scanf("%d", &binary);

    temp = binary;

    while (temp > 0)
    {
        remainder = temp % 10; // Get the remainder
        decimal = decimal + (remainder * base); // Add the remainder to the decimal
        temp = temp / 10; // Divide the number by 10
        base = base * 2; // Multiply the base by 2
    }

    printf("The decimal equivalent of %d is %d\n", binary, decimal);

    return 0;
}

