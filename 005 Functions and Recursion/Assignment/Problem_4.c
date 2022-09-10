/* Solution to Problem: 4| Display output of given program segment
 *
 * What will be the output of the following program segment?

    Author: Paul Watts
    Date:   10th September 2022

*/

#include <stdio.h>

int main(void)
{
    {
        printf("\n*** Part 1 ***\n");
        int count = 0;

        while (count++ < 10)
        {
            printf("This loop can repeat statements\n");
        }
    }
    {
        printf("\n*** Part 2 ***\n");
        int count = 5;

        while (--count > 0)
        {
            printf("Count is %d\n", count);
        }
    }
    {
        printf("\n*** Part 3 ***\n");
        int count = 5;

        while (count-- > 0)
        {
            printf("Count is %d\n", count);
        }
    }
    {
        printf("\n*** Part 4 ***\n");
        int count = 1;

        while (count++ <= 5)
        {
            printf("Count is %d\n", count*(count-2));
        }
    }


    return 0;
}