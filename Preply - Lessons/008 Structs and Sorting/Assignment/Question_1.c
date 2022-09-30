/* Question 1
 *
 * Write a program to find the length of a string without using a library function.
 *
 */

#include <stdio.h>


int main()
{
    char str[100];
    int i = 0;

    printf("Enter a string without spaces: ");
    scanf("%s", str);

    while(str[i] != '\0')
    {
        i++;
    }

    printf("Length of string: %d", i);

    return 0;
}

