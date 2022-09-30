/* Question 6
 *
 * Write a program to find the maximum occurring character in a string and the number of times it occurs.
 *
 */

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100]; // Records the entered string
    int i, len; // Records the length of the string
    int max = 0; // Records the maximum number of times a character occurs

    int freq[256] = {0}; // Initialize all elements to 0

    printf("\n Please Enter any String :  ");
    gets(str);

    len = strlen(str);

    for(i = 0; i < len; i++)
    {
        freq[str[i]]++;
    }

    for(i = 0; i < 256; i++)
    {
        if(freq[i] > freq[max])
        {
            max = i;
        }
    }
    printf("\n");
    printf("The Highest frequency of character: %c \n", max); // Prints the character with the highest frequency
    printf("appears number of times: %d \n", freq[max]); // Prints the number of times the character with the highest frequency appears
    return 0;
}
