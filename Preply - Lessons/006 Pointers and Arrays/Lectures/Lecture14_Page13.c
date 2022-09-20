// Pointers Comparison
// Created by Paul Watts on 21/09/22.
//

#include <stdio.h>

void display(int *, int); // function prototype

int main() {
    int num[] = {24, 34, 12, 44, 56, 17};
    display(num, 6); // function call
    return 0;
}

void display (int *j, int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("\nAddress of num[%d] = %p", i, j);
        printf("\nValue of num[%d] = %d", i, *j);
        j++; // j is incremented by 1
    }
}

