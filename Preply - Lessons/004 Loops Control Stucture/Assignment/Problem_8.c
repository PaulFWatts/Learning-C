/* Solution to Problem_8 Print a diamond shape of asterisks

        Author: Paul Watts
        Date:   31th August 2022

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
    int limit;     // Initialise the limit variable


    printf("Enter size of diamond: ");
    scanf("%d", &limit);

    for (i = 1; i <= limit; i++)
    {
        for (j = 1; j <= limit-i; j++)
            printf(" ");

        for (j = 1; j <= 2*i-1; j++)
            printf("*");

        printf("\n");
    }

    for (i = 1; i <= limit - 1; i++)
    {
        for (j = 1; j <= i; j++)
            printf(" ");

        for (j = 1 ; j <= 2*(limit-i)-1; j++)
            printf("*");

        printf("\n");
    }
    wait();
    return 0;
}
