/* Demo program for C operators

    Author: Paul Watts
    Date:   August, 2022

An operator is a symbol that tells the compiler to perform specific mathematical or logical
manipulations. C language is rich in built-in operators and provides the following types of
operators:

    1. Arithmetic Operators
    2. Relational Operators
    3. Logical Operators
    4. Bitwise Operators
    5. Assignment Operators
    6. Misc Operators

*/

#include <stdio.h>
#include <stdbool.h>
#include <unistd.h> // for sleep() using linux
// #include <windows.h> // for sleep() using windows

int main()
{

    bool exit = false;
    int num;

    while (!exit)
    {

        // Simple Menu using Switch statement
        printf("\033[2J\033[1;1H"); // clear screen
        printf("Menu:\n");
        printf("1. Arithmetic Operators\n");
        printf("2. Relational Operators\n");
        printf("3. Logical Operators\n");
        printf("4. Assignment Operators\n");
        printf("5. Bitwise Operators\n");
        printf("6. Misc Operators\n");
        printf("7. Exit\n");
        printf("\nEnter a number: ");
        scanf("%d", &num); // read in a number
        switch (num)
        {
        case 1: // Demonstration of Arithmetic Operators
        {

            printf("\033[2J\033[1;1H"); // clear screen
            printf("Arithmetic Operators\n\n");

            int a = 21;
            int b = 10;
            int c;

            c = a + b;
            printf("Line 1 - Value of c is %d\n", c);

            c = a - b;
            printf("Line 2 - Value of c is %d\n", c);

            c = a * b;
            printf("Line 3 - Value of c is %d\n", c);

            c = a / b;
            printf("Line 4 - Value of c is %d\n", c);

            c = a % b;
            printf("Line 5 - Value of c is %d\n", c);

            c = a++;
            printf("Line 6 - Value of c is %d\n", c);

            c = a--;
            printf("Line 7 - Value of c is %d\n", c);

            printf("Pausing for 4 seconds...\n");
            sleep(4);

            break;
        }
        case 2: // Demonstration of Relational Operators
        {
            printf("\033[2J\033[1;1H"); // clear screen
            printf("Relational Operators\n\n");
            int a = 21;
            int b = 10;
            int c;

            if (a == b)
            {
                printf("Line 1 - a is equal to b\n");
            }
            else
            {
                printf("Line 1 - a is not equal to b\n");
            }

            if (a < b)
            {
                printf("Line 2 - a is less than b\n");
            }
            else
            {
                printf("Line 2 - a is not less than b\n");
            }

            if (a > b)
            {
                printf("Line 3 - a is greater than b\n");
            }
            else
            {
                printf("Line 3 - a is not greater than b\n");
            }

            /* Lets change value of a and b */
            a = 5;
            b = 20;

            if (a <= b)
            {
                printf("Line 4 - a is either less than or equal to  b\n");
            }

            if (b >= a)
            {
                printf("Line 5 - b is either greater than  or equal to b\n");
            }
            printf("Pausing for 4 seconds...\n");
            sleep(4);
            break;
        }
        case 3: // Demonstrational of Logical Operators
        {
            printf("\033[2J\033[1;1H"); // clear screen
            printf("Logical Operators\n\n");
            int a = 5;
            int b = 20;
            int c;

            if (a && b)
            {
                printf("Line 1 - Condition is true\n");
            }

            if (a || b)
            {
                printf("Line 2 - Condition is true\n");
            }

            /* lets change the value of  a and b */
            a = 0;
            b = 10;

            if (a && b)
            {
                printf("Line 3 - Condition is true\n");
            }
            else
            {
                printf("Line 3 - Condition is not true\n");
            }

            if (!(a && b))
            {
                printf("Line 4 - Condition is true\n");
            }
            printf("Pausing for 4 seconds...\n");
            sleep(4);
            break;
        }
        case 4: // Demonstration of Assignment Operators
        {
            printf("\033[2J\033[1;1H"); // clear screen
            printf("Assignment Operators\n\n");
            int a = 21;
            int c;

            c = a;
            printf("Line 1 - =  Operator Example, Value of c = %d\n", c);

            c += a;
            printf("Line 2 - += Operator Example, Value of c = %d\n", c);

            c -= a;
            printf("Line 3 - -= Operator Example, Value of c = %d\n", c);

            c *= a;
            printf("Line 4 - *= Operator Example, Value of c = %d\n", c);

            c /= a;
            printf("Line 5 - /= Operator Example, Value of c = %d\n", c);

            c = 200;
            c %= a;
            printf("Line 6 - %= Operator Example, Value of c = %d\n", c);

            c <<= 2;
            printf("Line 7 - <<= Operator Example, Value of c = %d\n", c);

            c >>= 2;
            printf("Line 8 - >>= Operator Example, Value of c = %d\n", c);

            c &= 2;
            printf("Line 9 - &= Operator Example, Value of c = %d\n", c);

            c ^= 2;
            printf("Line 10 - ^= Operator Example, Value of c = %d\n", c);

            c |= 2;
            printf("Line 11 - |= Operator Example, Value of c = %d\n", c);
            printf("Pausing for 8 seconds...\n");
            sleep(8);
            break;
        }
        case 5: // Demonstration of Bitwise Operators
        {
            printf("\033[2J\033[1;1H"); // clear screen
            printf("Bitwise Operators\n\n");
            unsigned int a = 60; /* 60 = 0011 1100 */
            unsigned int b = 13; /* 13 = 0000 1101 */
            int c = 0;

            c = a & b; /* 12 = 0000 1100 */
            printf("Line 1 - Value of c is %d\n", c);

            c = a | b; /* 61 = 0011 1101 */
            printf("Line 2 - Value of c is %d\n", c);

            c = a ^ b; /* 49 = 0011 0001 */
            printf("Line 3 - Value of c is %d\n", c);

            c = ~a; /*-61 = 1100 0011 */
            printf("Line 4 - Value of c is %d\n", c);

            c = a << 2; /* 240 = 1111 0000 */
            printf("Line 5 - Value of c is %d\n", c);

            c = a >> 2; /* 15 = 0000 1111 */
            printf("Line 6 - Value of c is %d\n", c);
            printf("Pausing for 4 seconds...\n");
            sleep(4);
            break;
        }
        case 6: // Demonstration of Misc Operators
        {
            printf("\033[2J\033[1;1H"); // clear screen
            printf("Misc Operators\n\n");
            int a = 4;
            short b;
            double c;
            int *ptr;

            /* example of sizeof operator */
            printf("Line 1 - Size of variable a = %d\n", sizeof(a));
            printf("Line 2 - Size of variable b = %d\n", sizeof(b));
            printf("Line 3 - Size of variable c= %d\n", sizeof(c));

            /* example of & and * operators */
            ptr = &a; /* 'ptr' now contains the address of 'a'*/
            printf("value of a is  %d\n", a);
            printf("*ptr is %d.\n", *ptr);

            /* example of ternary operator */
            a = 10;
            b = (a == 1) ? 20 : 30;
            printf("Value of b is %d\n", b);

            b = (a == 10) ? 20 : 30;
            printf("Value of b is %d\n", b);
            printf("Pausing for 6 seconds...\n");
            sleep(6);
            break;
        }
        case 7:                         // Exit
            printf("\033[2J\033[1;1H"); // clear screen
            printf("Exiting...\n");
            exit = true;
            break;
        default:
            printf("You made an invalid choice\n");
            break;
        }
    }
    return 0;
}
