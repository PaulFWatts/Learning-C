/* Solution to Problem: 7 | Arrays 1 dimensional, Searching

    Author: Paul Watts
    Date:   17th September 2022

*/

#include <stdio.h>
#include <string.h>


int main(void)
{
    // Write a C program to find an element from an array. Each element will be checked.
    // If searched element exists multiple times, then its count will also be shown.
    // Also show a message to user to update the word if found using input.
    // If the word is not found, then show a message to user to add the word in the array.

    char words[10][20] = {"apple", "apple", "orange", "grapes", "mango", "watermelon", "pineapple", "strawberry", "blueberry", "raspberry"};
    char search[20];
    int i, count = 0;
    int found = 0;
    int update = 0;
    int add = 0;
    int index = 0;
    int new = 0;
    char newWord[20];

    printf("Enter a word to search: ");
    scanf("%s", search);

    for (i = 0; i < 10; i++)
    {
        if (strcmp(search, words[i]) == 0)
        {
            found = 1;
            count++;
            index = i;
        }
    }

    if (found == 1)
    {
        printf("The word %s is found %d times in the array. \n", search, count);
        printf("Do you want to update the word? (1 = Yes, 0 = No): ");
        scanf("%d", &update);
        if (update == 1)
        {
            printf("Enter a new word: ");
            scanf("%s", newWord);
            strcpy(words[index], newWord);
            printf("The word %s is updated to %s. \n", search, words[index]);
        }
    }
    else
    {
        printf("The word %s is not found in the array. \n", search);
        printf("Do you want to add the word? (1 = Yes, 0 = No): ");
        scanf("%d", &add);
        if (add == 1)
        {
            printf("Enter a new word: ");
            scanf("%s", newWord);
            strcpy(words[10], newWord);
            printf("The word %s is added to the array. \n", words[10]);
        }
    }

    return 0;
}

