/* Question 2
 *
 * Write a program to print individual characters of a string in reverse order.
 *
 */

#include <stdio.h>

int main()
{
    char str[100];
    int i, len = 0;

    printf("Enter a string without spaces: ");
    scanf("%s", str);

    while (str[len] != '\0')
        len++;

    printf("Reverse of the string: ");
    for (i = len - 1; i >= 0; i--)
        printf("%c", str[i]);

    return 0;
}
