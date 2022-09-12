/* Solution to Problem_6 Switch Case, Nested Loop, Triangle Variation

        Author: Paul Watts
        Date:   30th August 2022

*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#ifdef _WIN32
    char clear[3] ="cls";
#else
    char clear[5] = "clear";
#endif

void wait() {
    printf("Press any key to continue...\n");
    int ch = getchar();
    fflush(stdin);
    ch = getchar();
}


int main()
{

    bool exit = false;
    int num;
    int i = 0;     // Initialise first loop counter
    int j = 0;     // Initialise second loop counter
    int limit;     // Initialise the limit variable for the 2nd loop
    int stars = 0; // Initialise the number of stars to print
    const char space = ' ';

    while (!exit)
    {

        // Simple Menu using Switch statement
        system(clear); // clear screen
        printf("Menu:\n");
        printf("1. Problem 2\n");
        printf("2. Problem 3\n");
        printf("3. Problem 4\n");
        printf("4. Problem 5\n");
        printf("5. Exit\n");
        printf("\nEnter a number: ");
        // fflush(stdin);
        scanf("%d", &num); // read in a number
        switch (num)
        {
            case 1:
            {

                system("clear"); // clear screen
                printf("Problem 2: Nested Loop, Triangle variation 1\n\n");
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
                break;
            }
            case 2:
            {
                system("clear"); // clear screen
                printf("Problem 3: Nested Loop, Triangle variation 2\n\n");
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
                wait();
                break;
            }
            case 3:
            {
                system(clear); // clear screen
                printf("Problem 4: Nested Loop, Triangle variation 3\n\n");
                printf("Enter size of triangle: ");
                scanf("%d", &limit);
                stars = limit; // Set the number of stars to print

                for (i; i < limit; i++)
                {
                    for (j = 0; j <= limit; j++)
                    {
                        if (j < stars) printf("%c",space);
                        else printf("*");
                    }
                    stars--; // Decrement the number of stars to print
                    printf("\n");
                }
                wait();
                break;
            }
            case 4:
            {
                system(clear); // clear screen
                printf("Problem 5: Nested Loop, Triangle variation 4\n\n");
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
                break;
            }
            case 5:                         // Exit
                system(clear); // clear screen
                printf("Exiting...\n");
                exit = true;
                break;
            default:
                printf("You made an invalid choice\n");
                wait();
                break;
        }
    }
    return 0;
}