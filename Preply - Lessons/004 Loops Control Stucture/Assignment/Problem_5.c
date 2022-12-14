/* Solution to Problem_5 Nested Loop, Triangle Variation 3 for Loop Control Structures

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
    const char space = ' ';

    printf("Enter size of triangle: ");
    scanf("%d", &limit);
    stars = limit; // Set the number of stars to print

    for (i; i < limit; i++)
    {
        for (j = 0; j <= limit; j++)
        {
            if (j > limit - stars) printf("*");
            else printf("%c",space);
        }
        stars--; // Decrement the number of stars to print
        printf("\n");
    }
    wait();
    return 0;
}