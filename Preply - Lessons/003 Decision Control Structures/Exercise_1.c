/* Solutions to Exercise_1 for Decision Control Structures

    Author: Paul Watts
    Date:   25th August, 2022

*/

#include <stdio.h>
#include <stdbool.h>
#include <unistd.h> // for sleep() using linux
// #include <windows.h> // for sleep() using windows

/*
    Function to pause the passed number of seconds
*/
void pause_seconds(int seconds)
{
    printf("\n\nPausing for %d seconds...\n", seconds);
    sleep(seconds);
}

int main()
{

    bool exit = false;
    int num;

    while (!exit)
    {

        // Simple Menu using Switch statement
        printf("\033[2J\033[1;1H"); // clear screen
        printf("Menu:\n");
        printf("1. Exercise 1\n");
        printf("2. Exercise 2\n");
        printf("3. Exercise 3\n");
        printf("4. Exercise 4\n");
        printf("5. Exercise 5\n");
        printf("6. Exercise 6\n");
        printf("7. Exercise 7\n");
        printf("8. Exit\n");
        printf("\nEnter a number: ");
        fflush(stdin);
        scanf("%d", &num); // read in a number
        switch (num)
        {
        case 1:
        {

            printf("\033[2J\033[1;1H"); // clear screen
            printf("Exercise 1: This program evaluates your mark for an entry test\n\n");
            printf("Enter your mark: ");
            int mark;
            scanf("%d", &mark);
            if (mark > 80)
                printf("You can get admission\n");

            else
                printf("Sorry you did not get admission. Please try next time\n");

            pause_seconds(4); // pause for 4 seconds
            break;
        }
        case 2:
        {
            printf("\033[2J\033[1;1H"); // clear screen
            printf("Exercise 2: This program evaluates given expressions for true or false\n\n");

            int x = 10;
            int y = 15;
            int z = 20;
            bool result = false;

            printf("x = %d\n", x);
            printf("y = %d\n", y);
            printf("z = %d\n", z);
            printf("\n");

            result = !(x > 10);
            printf("a) !(x > 10) is %s\n", result ? "true" : "false"); // result is true if x is less than 10

            result = x <= 5 || y < 15;
            printf("b) x <= 5 || y < 15 is %s\n", result ? "true" : "false"); // result is true if x is less than 5 or y is less than 15

            result = (x != 5) && (y != z);
            printf("c) (x != 5) && (y != z) is %s\n", result ? "true" : "false"); // result is true if x is not equal to 5 and y is not equal to z

            result = x >= z || (x + y >= z);
            printf("d) x >= z || (x + y >= z) is %s\n", result ? "true" : "false"); // result is true if x is greater than or equal to z or x + y is greater than or equal to z

            result = (x <= y - 2) && (y >= z) || (z - 2 != 20);
            printf("e) (x <= y - 2) && (y >=z) || (z - 2 != 20) is %s\n", result ? "true" : "false"); // result is true if x is less than or equal to y - 2 and y is greater than z or z - 2 is not equal to 20
            printf("\n");

            printf("Pausing for 10 seconds...\n");
            sleep(10);
            break;
        }
        case 3:
        {
            printf("\033[2J\033[1;1H"); // clear screen
            printf("Exercise 3: Compare 3 integer values to see if they are equal and also display the greatest value\n\n");

            int a, b, c;

            printf("Enter 3 integer values (seperated by spaces): ");
            scanf("%d %d %d", &a, &b, &c);
            if (a == b && b == c)
                printf("All values are equal\n");
            else
                printf("All values are not equal\n");

            if (a > b && a > c)
                printf("%d is the greatest value\n", a);
            else if (b > a && b > c)
                printf("%d is the greatest value\n", b);
            else
                printf("%d is the greatest value\n", c);

            pause_seconds(5); // pause for 5 seconds
            break;
        }
        case 4:
            /*
                Write a basic caulator program using the switch statement that asks for 2 values from the user and then asks for an operator.
           */
            {
                printf("\033[2J\033[1;1H"); // clear screen
                printf("Exercise 4: A simple calculator program\n\n");
                int a, b;
                char op;
                printf("Enter two integer values (seperated by spaces): ");
                scanf("%d %d", &a, &b);
                printf("Enter an operator ( +, -, *, /,): ");
                scanf(" %c", &op);
                switch (op)
                {
                case '+':
                    printf("%d + %d = %d\n", a, b, a + b);
                    break;
                case '-':
                    printf("%d - %d = %d\n", a, b, a - b);
                    break;
                case '*':
                    printf("%d * %d = %d\n", a, b, a * b);
                    break;
                case '/':
                    printf("%d / %d = %d\n", a, b, a / b);
                    break;
                default:
                    printf("Invalid operator\n");
                    break;
                }
                pause_seconds(5); // pause for 5 seconds
                break;
            }
            {
                printf("\033[2J\033[1;1H"); // clear screen
                printf("Assignment Operators\n\n");

                printf("Pausing for 8 seconds...\n");
                sleep(8);
                break;
            }
        case 5:
            /*
                Write a program that prompts the user to input three numbers and display them in descending order
            */
            {
                printf("\033[2J\033[1;1H"); // clear screen
                printf("Exercise 5: Display numbers in descending order\n\n");
                int a, b, c;
                printf("Enter three integer values (seperated by spaces): ");
                scanf("%d %d %d", &a, &b, &c);
                if (a > b && a > c)
                {
                    if (b > c)
                        printf("%d %d %d\n", a, b, c);
                    else
                        printf("%d %d %d\n", a, c, b);
                }
                else if (b > a && b > c)
                {
                    if (a > c)
                        printf("%d %d %d\n", b, a, c);
                    else
                        printf("%d %d %d\n", b, c, a);
                }
                else
                {
                    if (a > b)
                        printf("%d %d %d\n", c, a, b);
                    else
                        printf("%d %d %d\n", c, b, a);
                }
                pause_seconds(5); // pause for 5 seconds
                break;
            }
            {
                printf("\033[2J\033[1;1H"); // clear screen
                printf("Bitwise Operators\n\n");

                printf("Pausing for 4 seconds...\n");
                sleep(4);
                break;
            }
        case 6:
            /*
                Write a program that prompts the user for a year and then display if it is a leap year without using the modulus operator
            */

            {
                printf("\033[2J\033[1;1H"); // clear screen
                printf("Exercise 6: Leap year\n\n");
                int year; // year to check
                int q;    // quotient of year / 4
                int p;    // product
                int m;    // modulus
                printf("Enter a year: ");
                scanf("%d", &year);
                q = year / 4;
                p = q * 4;
                m = year - p;
                if (m == 0)
                    printf("%d is a leap year\n", year);
                else
                    printf("%d is not a leap year\n", year);

                pause_seconds(4); // pause for 4 seconds
                break;
            }
        case 8:                         // Exit
            printf("\033[2J\033[1;1H"); // clear screen
            printf("Exiting...\n");
            exit = true;
            break;
        default:
            printf("You made an invalid choice\n");
            pause_seconds(4); // pause for 4 seconds
            break;
        }
    }
    return 0;
}
