/* Problem 2 | Searching Array
 *
 * Write a program that initializes 15 numbers; then apply a binary search to search an element from the array
 *
 * Author: Paul Watts
 * Date: 23/09/2022
 *
 */

#include <stdio.h>

int main()
{
    int i, j, n, search, array[15];

    printf("Enter the number of elements in the array (max 15): ");
    scanf("%d", &n);

    printf("Enter %d integers (separated by spaces): ", n);

    for (i = 0; i < n; i++)
        scanf("%d", &array[i]);

    printf("Enter the number to search: ");
    scanf("%d", &search);

    // Perform a binary search
    int first = 0;
    int last = n - 1;
    int middle = (first+last)/2;

    while (first <= last) {
        if (array[middle] < search)
            first = middle + 1;
        else if (array[middle] == search) {
            printf("%d is present at location %d. ", search, middle+1);
            break;
        }
        else
            last = middle - 1;

        middle = (first + last)/2;
    }

    if (first > last)
        printf("%d is not present in the array. ", search);

    return 0;
}
