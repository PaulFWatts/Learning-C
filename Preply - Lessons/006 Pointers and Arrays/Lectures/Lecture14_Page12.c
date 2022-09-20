// Pointers Comparison
// Created by Paul Watts on 21/09/22.
//

#include <stdio.h>


int main() {
    int num[] = { 24, 34, 12, 44, 56, 17 };
    int i, *j; // j is a pointer to an integer
    j = &num[0]; // j is assigned the address of the first element of num
    // same as j = num;

    for (i = 0; i < 6; i++) {
        printf("\nAddress of num[%d] = %p", i, j);
        printf("\nValue of num[%d] = %d", i, *j);
        j++; // j is incremented by 1
    }

    return 0;
}
