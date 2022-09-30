/* Question 10
 *
 * Create an array of 10 random values from the user, then use a bubble sort to sort the array in descending order.
 * After sorting the array, print the array.
 *
 */

#include <stdio.h>

int main()
{
    int arr[10], i, j, temp;

    printf("Enter 10 numbers: ");
    for (i = 0; i < 10; i++)
        scanf("%d", &arr[i]);

    // Bubble sort in descending order
    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Array after sorting: ");
    for (i = 0; i < 10; i++)
        printf("%d ", arr[i]);

    return 0;
}

