/* Solution to Problem: 2 | Evaluate the following expressions
 *
 * Evaluate the following expressions and display the results:

    Author: Paul Watts
    Date:   10th September 2022

*/

#include <stdio.h>

int main(void) {
    {
        int x = 5;
        int y = 6;
        int z = 4;
        float w = 3.5;

        printf("a) %d\n", (x + z) % y);
        printf("b) Invalid operand float\n"); // (x + y) * w
        printf("c) Invalid operand float\n"); // (y + w) % x
        printf("d) %f\n", (x + y) * w);
        printf("e) %d\n", (x % y) % z);
        printf("f) %d\n", (y % z) % x);
        printf("g) %d\n", (x * z) % y);
        printf("h) Invalid operand float\n"); // ((x * y) * w) * z

        return 0;
    }
}