/* Question 5
 *
 * Write a program to count total number of vowels and consonants in a string.
 *
 */

#include <stdio.h>

int main()
{
    char str[100];
    int i, vowels, consonants;

    vowels =  consonants = 0; // Initialize the variables

    printf("Enter a string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; ++i)
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
           str[i] == 'o' || str[i] == 'u' || str[i] == 'A' ||
           str[i] == 'E' || str[i] == 'I' || str[i] == 'O' ||
           str[i] == 'U')
        {
            ++vowels;
        }
        else if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            ++consonants;
        }
    }

    printf("\n");
    printf("Vowels: %d \n", vowels);
    printf("Consonants: %d \n", consonants);

    return 0;
}
