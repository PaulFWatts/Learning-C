/* Problem 5 | 2D Array
 *
 * Write a program that can be used to assign seats for a commercial airplane. The airplane has 13 rows, with
 * six seats in each row. Rows 1 and 2 are first class, rows 3 through 7 are business class, and rows 8 through
 * 13 are economy class. Your program must prompt the user to enter the following information:
 *  1. Ticket type (first class, business class, or economy class)
 *  2. Desired seat
 *
 * Output the seating plan after each seat showing each row where * indicates an empty seat and X indicates a
 * seat that has been assigned. Make this a menu driven program showing the user's options and allowing them
 * to choose which option they want to perform.
 *
 * Author: Paul Watts
 * Date: 23/09/2022
 *
 */


#include <stdio.h>

int main() {
    // Initialize and store the seating plan
    char seatingPlan[13][6] = {
            {'*', '*', '*', '*', '*', '*'},
            {'*', '*', '*', '*', '*', '*'},
            {'*', '*', '*', '*', '*', '*'},
            {'*', '*', '*', '*', '*', '*'},
            {'*', '*', '*', '*', '*', '*'},
            {'*', '*', '*', '*', '*', '*'},
            {'*', '*', '*', '*', '*', '*'},
            {'*', '*', '*', '*', '*', '*'},
            {'*', '*', '*', '*', '*', '*'},
            {'*', '*', '*', '*', '*', '*'},
            {'*', '*', '*', '*', '*', '*'},
            {'*', '*', '*', '*', '*', '*'},
            {'*', '*', '*', '*', '*', '*'}
    };
    // Prompt the user to enter the following information:
    //  1. Ticket type (first class, business class, or economy class)
    //  2. Desired seat
    int ticketType;
    int desiredSeat;
    int YesNo;
    int i, j;
    do {
        printf("Do you wish to assign a seat? (1 = Yes, 0 = No): ");
        scanf("%d", &YesNo);
        printf("Please enter the ticket type (1 = First Class, 2 = Business Class, 3 = Economy Class): ");
        scanf("%d", &ticketType);
        printf("Please enter the desired seat (1 - 6): ");
        scanf("%d", &desiredSeat);
        // Output the seating plan after each seat showing each row where * indicates an empty seat and X indicates a
        // seat that has been assigned
        if (ticketType == 1) {
            if (seatingPlan[0][desiredSeat - 1] == '*') {
                seatingPlan[0][desiredSeat - 1] = 'X';
            } else {
                printf("Sorry that seat is taken, please choose another.\n");
            }
        } else if (ticketType == 2) {
            if (seatingPlan[2][desiredSeat - 1] == '*') {
                seatingPlan[2][desiredSeat - 1] = 'X';
            } else {
                printf("Sorry that seat is taken, please choose another.\n");
            }
        } else if (ticketType == 3) {
            if (seatingPlan[7][desiredSeat - 1] == '*') {
                seatingPlan[7][desiredSeat - 1] = 'X';
            } else {
                printf("Sorry that seat is taken, please choose another.\n");
            }
        }
        printf("Seating Plan:\n");
        for (i = 0; i < 13; i++) {
            for (j = 0; j < 6; j++) {
                printf("%c ", seatingPlan[i][j]);
            }
            printf("\n");
        }
    } while (YesNo != 0);
    return 0;
}

