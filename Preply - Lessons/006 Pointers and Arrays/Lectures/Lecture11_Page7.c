//
// Created by Paul Watts on 19/09/22.
//

#include <stdio.h>


int main() {
    int i = 3;

    printf("\nAddress if i = %p", &i); // %p is used to print the address of a variable
    printf("\nValue of i = %d", i); // %d is used to print the value of a variable
    printf("\nValue of i = %d", *(&i)); // *(&i) same as printing the value of i

    return 0;
}
