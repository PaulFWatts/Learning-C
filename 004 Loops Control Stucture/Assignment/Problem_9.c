/* Solution to Problem_9 While loop to print number pattern

    Author: Paul Watts
    Date:   30th August, 2022

*/

#include <stdio.h>

int main()
{
    int i = 0;     // Initialise first loop counter
    int j = 0;     // Initialise second loop counter
    int limit;     // Initialise the limit variable
    int num;       // Initialise the number to print

    limit = 8; // Set the limit variable for the 1st loop
    num = 1; // Set the number to print


    while (i < limit)
    {
        j = 0; // Reset the 2nd loop counter
        num++; // Increment the number to print
        while (j < num)
        {
            if (j != 0) printf("= ="); // Don't print the first = =
            printf("%d", (num - j)); // Print the number
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
