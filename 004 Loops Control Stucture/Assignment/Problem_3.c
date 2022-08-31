/* Solution to Problem_3 Nested Loop, Triangle Variation 2 for Loop Control Structures

    Author: Paul Watts
    Date:   30th August, 2022

*/

#include <stdio.h>
#include <stdbool.h>

int main()
{

    int i = 0;     // Initialise first loop counter
    int j = 0;     // Initialise second loop counter
    int limit;     // Initialise the limit variable for the 2nd loop
    int stars = 0; // Initialise the number of stars to print

    printf("Enter size of triangle: ");
    scanf("%d", &limit);
    stars = limit - 1; // Set the number of stars to print

    for (i; i < limit; i++)
    {
        for (j = 0; j <= stars; j++)
        {
            printf("*");
        }
        stars--; // Decrement the number of stars to print
        printf("\n");
    }
    printf("Press any key to continue...\n");
    getchar();
    return 0;
}
