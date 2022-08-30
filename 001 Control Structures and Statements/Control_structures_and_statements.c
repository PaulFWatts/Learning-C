/* Demo program for control structures and statements

    Author: Paul Watts
    Date:   August, 2022

    There are three types of control structures:
        1. Sequence structure (straight line paths)
        2. Selection structure (one or more branches)
        3. Loop structure (repetition of a set of activities)

    To implement these control structures, we use the following control statements:
        1. Switch
        2. If
        3. If Else
        4. While
        5. Do While
        6. For

    Selections structures are implemented using If, IF Else and Switch
    Looping structures are implemented using While, Do While and For

*/
#include <stdio.h>

void main()
{
    // Eaxmple using Switch statement
    int num;
    printf("\033[2J\033[1;1H"); // clear screen
    printf("Menu:\n");
    printf("1. If\n");
    printf("2. If Else\n");
    printf("3. While loop\n");
    printf("4. Do While loop\n");
    printf("5. For loop\n");
    printf("\nEnter a number: ");
    scanf("%d", &num); // read in a number
    switch (num)
    {
    case 1: // Demonstration of a Simple If Statement
        int num1;
        printf("\033[2J\033[1;1H"); // clear screen
        printf("Simple If statement demonstration\n\n");
        printf("Enter a number > 0 and < 2: ");
        scanf("%d", &num1); // read in a number
        if (num1 == 1)
        {
            printf("\nYou entered 1\n");
            break;
        }
        if (num1 == 2)
        {
            printf("\nYou entered 2\n");
            break;
        }
        {
            printf("\nYou entered an invalid number\n");
        }
        break;
    case 2: // Demonstration of a Simple If Else Statement
        int num2;
        printf("\033[2J\033[1;1H"); // clear screen
        printf("Simple If Else statement demonstration\n\n");
        printf("Enter a number > 0 and < 2: ");
        scanf("%d", &num2); // read in a number
        if (num2 == 1)
        {
            printf("\nYou entered 1\n");
        }
        else if (num2 == 2)
        {
            printf("\nYou entered 2\n");
        }
        else
        {
            printf("\nYou entered an invalid number\n");
        }
        break;
    case 3: // Demonstration of a While Loop
        int num3;
        int count = 0;              // Initialise loop counter
        printf("\033[2J\033[1;1H"); // clear screen
        printf("Simple While loop demonstration\n\n");
        printf("Enter the number of times to loop: ");
        scanf("%d", &num3);  // read in a number
        while (count < num3) // loop until count is equal to num3 since we start at 0
        {
            printf("Looping %d times\n", count + 1);
            count++; // increment count
        }
        break;
    case 4: // Demonstration of a Do While Loop
        int num4;
        int count2 = 0;             // Initialise loop counter
        printf("\033[2J\033[1;1H"); // clear screen
        printf("Simple Do While loop demonstration\n\n");
        printf("Enter the number of times to loop: ");
        scanf("%d", &num4); // read in a number
        do
        {
            printf("Looping %d times\n", count2 + 1);
            count2++;            // increment count
        } while (count2 < num4); // loop until count is equal to num3 since we start at 0
        break;
    case 5: // Demonstration of a For Loop
        int num5;
        int count3 = 0;             // Initialise loop counter
        printf("\033[2J\033[1;1H"); // clear screen
        printf("Simple For loop demonstration\n\n");
        printf("Enter the number of times to loop: ");
        scanf("%d", &num5);                       // read in a number
        for (count3 = 0; count3 < num5; count3++) // loop until count is equal to num3 since we start at 0
        {
            printf("Looping %d times\n", count3 + 1);
        }
        break;

    default:
        printf("You made an invalid choice\n");
        break;
    }

    return 0;
}
