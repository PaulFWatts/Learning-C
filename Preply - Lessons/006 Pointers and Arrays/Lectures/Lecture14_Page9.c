// Pointers Comparison
// Created by Paul Watts on 21/09/22.
//

#include <stdio.h>


int main() {
    int arr[] = {10, 20, 36, 72, 45, 36};
    int *j, *k; // j and k are pointers to integers
    j = &arr[4]; // j is assigned the address of the 5th element of arr
    k = (arr + 4); // k is assigned the address of the 5th element of arr

    if (j == k) // j and k are compared
    {
        printf("\nThe two pointers point to the same location");
        printf("\nAddress of j = %p", j);
        printf("\nAddress of k = %p", k);
    } else
    {
        printf("\nThe two pointers point to different locations");
        printf("\nAddress of j = %p", j);
        printf("\nAddress of k = %p", k);
    }
    return 0;
}
