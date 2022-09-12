/* Solution to Problem: 8| Calculate vowels and constants in a string
 *
 * Input characters from the keyboard and count the number of vowels and
 * constants in the string. The program should stop when the user enters
 * the 'n' character. The program should also display the number of vowels
 * and constants in the string.

    Author: Paul Watts
    Date:   10th September 2022

*/

#include <stdio.h>

int main(void)
{
    char ch = 0; // The character to be tested
    int vowels = 0; // The number of vowels
    int constants = 0; // The number of constants

    printf("Please enter a string of characters, enter n to end: ");

    do
    {
        scanf("%c", &ch);

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            vowels++;
        }
        else if (ch == 'n')
        {
            break;
        }
        else
        {
            constants++;
        }

    } while (ch != 'n');

    printf("The number of vowels is %d and the number of constants is %d\n", vowels, constants);

    return 0;
}
