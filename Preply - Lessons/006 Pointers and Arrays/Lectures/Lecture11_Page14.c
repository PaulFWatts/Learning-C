//
// Created by Paul Watts on 19/09/22.
//

#include <stdio.h>


int main() {
    int i = 3, *j, **k; // j is a pointer to an integer, k is a pointer to a pointer to an integer
    j = &i; // j now points to the address of i
    k = &j; // k now points to the address of j

    printf("\nAddress of i = %p", &i); // %p is used to print the address of a variable
    printf("\nAddress of i = %p", j); // %p is used to print the address of a variable
    printf("\nAddress of i = %p", *k); // %p is used to print the address of a variable
    printf("\nAddress of j = %p", &j); // %p is used to print the address of a variable
    printf("\nAddress of j = %p", k); // %p is used to print the address of a variable
    printf("\nAddress of k = %p", &k); // %p is used to print the address of a variable
    printf("\nValue of j = %p", j); // j contains the address of i
    printf("\nValue of k = %p", k); // k contains the address of j
    printf("\nValue of i = %d", i); // %d is used to print the value of a variable
    printf("\nValue of i = %d", *(&i)); // *(&i) same as printing the value of i
    printf("\nValue of i = %d", *j); // *j same as printing the value of i
    printf("\nValue of i = %d", **k); // **k same as printing the value of i

    return 0;
}
