/* Question 9
 *
 * Write a program to count the number of punctuation characters in a string.
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
        if (str[i] == '.' || str[i] == ',' || str[i] == ';' || str[i] == ':' || str[i] == '!' || str[i] == '?')
            count++;
    }

    printf("\n");
    printf("Total number of punctuation characters in the string: %d", count);

    return 0;
}

