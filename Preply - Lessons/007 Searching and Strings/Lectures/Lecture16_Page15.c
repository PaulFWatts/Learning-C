/*
 * Program to demonstrate the strcat() function
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    char name1[] = "Paul Watts";
    char name2[] = " is a student at the University of Tasmania";
    char name3[80];

    strcpy(name3, name1);
    strcat(name3, name2);
    printf("%s", name3);

    return 0;
}
