/* Problem 1 | Searching Array
 *
 * Write a program that initializes 15 numbers; then apply a linear search to search an element from the array
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

    for (i = 0; i < n; i++) // Perform a linear search
    {
        if (array[i] == search)
        {
            printf("%d is present at location %d. ", search, i+1);
            break;
        }
    }

    if (i == n)
        printf("%d is not present in the array. ", search);

    return 0;
}
