/*
 * Program to demonstrate printing of a string using a pointer
 */

#include <stdio.h>

int main(void)
{
    char name[] = "Paul Watts";
    char *namePtr = name; // set namePtr to point to the string "Paul Watts"

    while (*namePtr != '\0') // while the character pointed to by namePtr is not the null character
    {
        printf("%c", *namePtr); // print the character pointed to by namePtr
        namePtr++; // increment namePtr to point to the next character
    }

    return 0;
}
