/*
 * Program to demonstrate receiving a string from the user
 */

#include <stdio.h>

int main(void)
{
    char name[25];

    printf("Enter your first name (max 25 characters): ");
    scanf("%s", name);
    printf("Hello %s ", name);

    return 0;
}
