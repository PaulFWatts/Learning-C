/* Solution to Problem: 4 | Arrays 1 dimensional

    Author: Paul Watts
    Date:   17th September 2022

*/

#include <stdio.h>


int main(void)
{
    // What is stored in list after the following code is executed?

    int list[6];
    list[0] = 5;

    for  (int i = 1; i < 6; i++)
    {
        list[i] = i * i + 5;
            if (i > 2)
            {
                list[i] = 2 * list[i] - list[i -1];
            }
    }

    for (int i = 0; i < 6; i++)
    {
        printf("%d ", list[i]);
    }

    return 0;
}

