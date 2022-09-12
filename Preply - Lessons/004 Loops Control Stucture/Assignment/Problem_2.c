/* Solution to Problem_2 Nested Loop, Triangle Variation 1 for Loop Control Structures

    Author: Paul Watts
    Date:   30th August 2022

*/

#include <stdio.h>

void wait() {
    printf("Press any key to continue...\n");
    int ch = getchar();
    fflush(stdin);
    ch = getchar();
}

int main()
{

    int i = 0;     // Initialise first loop counter
    int j = 0;     // Initialise second loop counter
    int limit;     // Initialise the limit variable for the 2nd loop
    int stars = 0; // Initialise the number of stars to print


    printf("Enter size of triangle: ");
    scanf(" %d", &limit);

    for (i; i < limit; i++)
    {
        for (j = 0; j <= i; j++)
        {
            stars++;
            printf("*");
        }
       printf("\n");
    }
    wait();
    return 0;
}
