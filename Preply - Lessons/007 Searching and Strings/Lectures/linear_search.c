//
// Created by Paul Watts on 18/09/2022.
//

// Write a linear search function that takes an array of integers and the size of the array as parameters.
// The function should return the index of the first occurrence of the number 42 in the array.
// If the number 42 is not in the array, the function should return -1.

#include <stdio.h>

int linear_search(int array[], int size) {
    for (int i = 0; i < size; i++) {
        if (array[i] == 42) {
            return i;
        }
    }
    return -1;
}

int main() {
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 42, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int size = sizeof(array) / sizeof(array[0]);
    int index = linear_search(array, size);
    printf("The index of the first occurrence of 42 is %d in the array. If the number 42 is not in the array, the function should return -1. The index is %d", index, index);
    return 0;
}


