/* Problem 3 | Searching Array
 *
 * Write a program that Inputs an integer containing only 0s and 1s (i.e., a “binary” integer)
 * and store the elements of a number individually in an array and print its decimal equivalent.
 * Use the modulus and division operators to pick off the “binary” number’s digits one at a time from right to left.
 *
 * Author: Paul Watts
 * Date: 23/09/2022
 *
 */

#include <stdio.h>

int main()
{
    printf("Enter a binary number: ");
    int binary;
    scanf("%d", &binary);

    int decimal = 0;
    int base = 1;
    int temp = binary;

    while (temp) {
        int lastDigit = temp % 10;
        temp = temp / 10;

        decimal += lastDigit * base;

        base = base * 2;
    }

    printf("The decimal equivalent of %d is %d. ", binary, decimal);

    return 0;
}
