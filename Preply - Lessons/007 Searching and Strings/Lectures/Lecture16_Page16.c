/*
 * Program to demonstrate the strcmp() function
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    char name1[] = "Paul Watts";
    char name2[] = "Paul Watts";
    char name3[] = "Paul";
    char name4[] = "Paula";

    if (strcmp(name1, name2) == 0)
        printf("name1 and name2 are the same\n");
    else
        printf("name1 and name2 are different\n");

    if (strcmp(name1, name3) == 0)
        printf("name1 and name3 are the same\n");
    else
        printf("name1 and name3 are different\n");

    if (strcmp(name1, name4) == 0)
        printf("name1 and name4 are the same\n");
    else
        printf("name1 and name4 are different\n");

    return 0;
}

