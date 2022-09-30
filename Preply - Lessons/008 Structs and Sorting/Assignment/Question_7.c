/* Question 7
 *
 * Write a program to read a sentence and replace lowercase characters with uppercase and vice versa.
 *
 */

#include <stdio.h>

int main()
{
    char str[100];
    int i, len = 0;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    while (str[len] != '\0')
        len++;

    for (i = 0; i < len; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
    }
    printf("\n");
    printf("String after case conversion: %s", str);

    return 0;
}

