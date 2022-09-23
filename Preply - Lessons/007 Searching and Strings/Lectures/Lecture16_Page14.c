/*
 * Program to demonstrate strcpy() function
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    char name1[] = "Paul Watts";
    char name2[40];

    strcpy(name2, name1);
    printf("%s", name2);

    return 0;
}
