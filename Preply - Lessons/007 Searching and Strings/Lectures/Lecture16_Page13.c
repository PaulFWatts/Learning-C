/*
 * Program to demonstrate the strlen() function
 * and the use of a pointer to a string
 * to print the string in reverse order
 * using a while loop
 *
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[] = "Paul Watts";
    char *namePtr = name; // set namePtr to point to the string "Paul Watts"
    int length = strlen(name); // get the length of the string

    while (length >= 0) // while the character pointed to by namePtr is not the null character
    {
        printf("%c", namePtr[length]); // print the character pointed to by namePtr
        length--; // decrement namePtr to point to the next character
    }

    return 0;
}
