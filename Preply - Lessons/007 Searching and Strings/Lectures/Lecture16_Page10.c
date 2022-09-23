/*
 * Program to demonstrate receiving a multi-word string from the user
 */

#include <stdio.h>

int main(void)
{
    char name[40];

    printf("Enter your first and last name (max 40 characters): ");
    gets(name);
    puts("Hello ");
    puts(name);

    return 0;
}
