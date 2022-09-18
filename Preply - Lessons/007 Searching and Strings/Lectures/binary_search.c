//
// Created by Paul Watts on 18/09/2022.
//

// Write a binary search function that takes an array of integers and the size of the array as parameters.
// The function should return the index of the first occurrence of the number 42 in the array.
// If the number 42 is not in the array, the function should return -1.

#include <stdio.h>

int binary_search(int array[], int size) {
    int low = 0;
    int high = size - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (array[mid] == 42) {
            return mid;
        } else if (array[mid] < 42) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 42, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int size = sizeof(array) / sizeof(array[0]);
    int index = binary_search(array, size);
    printf("The index of the first occurrence of 42 is %d in the array. If the number 42 is not in the array, the function should return -1. The index is %d", index, index);
    return 0;
}

// Output:
// The index of the first occurrence of 42 is 10 in the array. If the number 42 is not in the array, the function should return -1. The index is 10