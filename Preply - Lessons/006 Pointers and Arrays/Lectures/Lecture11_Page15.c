/* Call by Value and Call by Reference
 *
 *  Author: Paul Watts on 19/09/22.
 */

#include <stdio.h>

void swapv(int x, int y) { // x and y are copies of the values of a and b
    int temp; // temp is a local variable
    temp = x; // temp is assigned the value of x
    x = y; // x is assigned the value of y
    y = temp; // y is assigned the value of temp

    printf("\nValue of x = %d", x);
    printf("\nValue of y = %d", y);
}

void swapr(int *x, int *y) { // x and y are pointers to integers
    int temp; // temp is an integer
    temp = *x; // temp is assigned the value of the integer pointed to by x
    *x = *y; // the value of the integer pointed to by x is assigned the value of the integer pointed to by y
    *y = temp; // the value of the integer pointed to by y is assigned the value of temp

    printf("\nValue of x = %d", *x);
    printf("\nValue of y = %d", *y);
}

int main() {
    int a = 10, b = 20; // a and b are integers

    printf("\nCalling by Value:");
    swapv (a, b); // call by value
    printf("\nValue of a = %d", a); // a is unchanged
    printf("\nValue of b = %d\n", b); // b is unchanged

    printf("\nCalling by Reference:");
    swapr (&a, &b); // call by reference
    printf("\nValue of a = %d", a); // a is changed
    printf("\nValue of b = %d\n", b); // b is changed

    return 0;
}




