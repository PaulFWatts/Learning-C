/* Solution to Problem: 10 | Enforcing Privacy with Cryptography
 *
 * Enter a four digit integer and encrypt it using the following algorithm:
 * Replace each digit with the result of adding 7 to the digit and getting the
 * remainder after dividing the new value by 10. Then swap the first digit with
 * the third, and swap the second digit with the fourth. Then print the encrypted
 * integer.

    Author: Paul Watts
    Date:   10th September 2022

*/

#include <stdio.h>

int main(void)
{
    int number = 0; // The number to be encrypted
    int digit1 = 0; // The first digit of the number
    int digit2 = 0; // The second digit of the number
    int digit3 = 0; // The third digit of the number
    int digit4 = 0; // The fourth digit of the number
    int temp = 0; // Used to swap digits

    printf("Please enter a four digit integer: ");
    scanf("%d", &number);

    // Extract the digits from the number
    digit1 = number / 1000;
    digit2 = (number % 1000) / 100;
    digit3 = (number % 100) / 10;
    digit4 = number % 10;

    // Encrypt the digits
    digit1 = (digit1 + 7) % 10;
    digit2 = (digit2 + 7) % 10;
    digit3 = (digit3 + 7) % 10;
    digit4 = (digit4 + 7) % 10;

    // Swap the digits
    temp = digit1;
    digit1 = digit3;
    digit3 = temp;

    temp = digit2;
    digit2 = digit4;
    digit4 = temp;

    // Print the encrypted number
    printf("The encrypted number is %d%d%d%d\n", digit1, digit2, digit3, digit4);

    return 0;
}

