/* Solution to Problem: 12 | Factorial using value returning function
 *
 * Calculate factorial of a positive integer n, using a value returning factorial

    Author: Paul Watts
    Date:   10th September 2022

*/


#include <stdio.h>

int factorial(int n)
{
    int i = 0;
    int result = 1;

    for (i = 1; i <= n; i++)
    {
        result = result * i;
    }
    return result;
}

int main(void)
{
    int n = 0;
    int result = 0;

    printf("Please enter a positive integer: ");
    scanf("%d", &n);

    result = factorial(n);

    printf("The factorial of %d is %d\n", n, result);

    return 0;
}


