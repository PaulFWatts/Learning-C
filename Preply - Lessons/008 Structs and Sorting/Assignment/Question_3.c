/* Question 3
 *
 * Write a program to count the total number of words in a string.
 *
 */

#include <stdio.h>

int main()
{
    char str[100];
    int i, len = 0, count = 0;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    while (str[len] != '\0')
        len++;

    for (i = 0; i < len; i++)
    {
        if (str[i] == ' ')
            count++;
    }

    printf("Total number of words in the string: %d", count + 1);

    return 0;
}
