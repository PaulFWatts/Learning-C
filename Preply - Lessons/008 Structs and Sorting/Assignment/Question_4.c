/* Question 4
 *
 * Write a program to count total number of alphabets, digits and special characters in a string.
 *
 */

#include <stdio.h>

int main()
{
    char str[100];
    int i, len = 0, count_alpha = 0, count_digit = 0, count_special = 0;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    while (str[len] != '\0')
        len++;

    for (i = 0; i < len; i++)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
            count_alpha++;
        else if (str[i] >= '0' && str[i] <= '9')
            count_digit++;
        else
            count_special++;
    }

    printf("\n");
    printf("Total number of alphabets in the string: %d \n", count_alpha);
    printf("Total number of digits in the string: %d \n", count_digit);
    printf("Total number of special characters in the string: %d \n", count_special);

    return 0;
}
