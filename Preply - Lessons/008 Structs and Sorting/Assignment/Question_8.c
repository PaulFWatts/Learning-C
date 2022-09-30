/* Question 8
 *
 * Write a program concatenate two strings without using a library function.
 *
 */

#include <stdio.h>

int main()
{
    char str1[100], str2[100]; // Declare two strings to be concatenated
    char str3[100] = {0}; // Initialize all elements to 0
    int i, j, len1 = 0, len2 = 0; // Declare variables to store length of strings

    printf("Enter first string: ");
    scanf("%[^\n]s", str1);

    while (str1[len1] != '\0')
        len1++;

    printf("Enter second string: ");
    scanf(" %[^\n]s", str2);

    while (str2[len2] != '\0')
        len2++;

    for (i = 0; i < len1; i++)
        str3[i] = str1[i];

    for (j = 0; j < len2; j++)
        str3[i + j] = str2[j];

    printf("\n");
    printf("Concatenated string: %s", str3);

    return 0;
}

