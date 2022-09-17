/* Solution to Problem: 5 | Arrays 1 dimensional

    Author: Paul Watts
    Date:   17th September 2022

*/

#include <stdio.h>


int main(void)
{
    // Determine whether the following array declarations are valid.

    int a[5] = {0, 4, 3, 2, 7};
    printf("a.) a[5] = {0, 4, 3, 2, 7} is valid \n");
    int b[10] = {0, 7, 3, 12};
    printf("b.) b[10] = {0, 7, 3, 12} is valid \n");
    // int c[7] = {12, 13, , 14,16, , 8};
    printf("c.) c[7] = {12, 13, , 14,16, , 8} is invalid \n");
    double lengths[] = {12.7, 13.9, 18.75, 20.78};
    printf("d.) double lengths[] = {12.7, 13.9, 18.75, 20.78} is valid \n");
    char name[8] = "Samantha";
    printf("e.) char name[8] = \"Samantha\" is valid \n");

    int list[10] = {8, 9, 15, 12,80};
    printf("f.) int list[10] = {8, 9, 15, 12,80} is valid \n");

    return 0;
}

