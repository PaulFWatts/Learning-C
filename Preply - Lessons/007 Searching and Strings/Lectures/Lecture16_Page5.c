/*
 * Program to demonstrate printing of a string
 */

#include <stdio.h>

int main(void)
{
    char name[] = "Paul Watts";
    int i = 0;

    while (name[i] != '\0')
    {
        printf("%c", name[i]);
        i++;
    }
    return 0;
}
