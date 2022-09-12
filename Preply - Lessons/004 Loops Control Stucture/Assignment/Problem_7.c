/* Solution to Problem_7 Nested Loop, Pyramid

        Author: Paul Watts
        Date:   30th August 2022

*/
//



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
    int k = 0;
    int limit;     // Initialise the limit variable for the 2nd loop
    int stars = 0; // Initialise the number of stars to print
    const char space = ' ';

    while (!exit)
    {

        // Simple Menu using Switch statement
        system(clear); // clear screen
        printf("Menu:\n");
        printf("1. Problem 7, Nested Loop, Pyramid\n");
        printf("2. Problem 7, Nested Loop, Inverted Pyramid\n");
        printf("3. Exit\n");
        printf("\nEnter a number: ");
        scanf("%d", &num); // read in a number
        switch (num)
        {
            case 1:
            {

                system("clear"); // clear screen
                printf("Problem 7: Nested Loop, Pyramid\n\n");

                limit = 4;

                for (i = 0; i < limit; i++) {
                    for (j = 0; j < limit - i - 1; j++)
                        putchar(' ');

                    for (; j < limit + i; j++)
                        putchar('*');

                    putchar('\n');
                }

                wait();
                break;
            }
            case 2:
            {
                system("clear"); // clear screen
                printf("Problem 7: Nested Loop, Inverted Pyramid\n\n");
                limit = 4;

                for (i = limit; i >= 1; i--) {
                    for (j = 0; j <= limit - i; j++)
                    {
                        putchar(' ');
                    }
                    k = 0;
                    while (k != (2 * i -1))
                    {
                        putchar('*');
                        k++;
                    }
                    putchar('\n');
                }

                wait();
                break;
            }
              case 3:                         // Exit
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
