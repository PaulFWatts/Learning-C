/* Solution to Problem_1 Nested Loop for Loop Control Structures

    Author: Paul Watts
    Date:   30th August, 2022

*/

#include <stdio.h>
#include <stdbool.h>

int main()
{

    int i = 0;      // Initialise first loop counter
    int j = 0;      // Initialise second loop counter
    int limit = 12; // Initialise the limit variable for the 2nd loop

    for (i; i < 10; i++) // Execute the first loop 10 times
    {
        --limit; // Decrement the limit variable
        for (j = 1; j < limit; j++)
        {
            printf("%d ", j); // Print the number
        }
        printf("\n");
    }
    printf("Press any key to continue...\n");
    getchar();
    return 0;
}
