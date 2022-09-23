/* Problem 4 | Searching Array
 *
 * Jason, Samantha, Ravi, Sheila, and Ankit are preparing for an upcoming marathon.
 * Each day of the week, they run a certain number of miles and write them into a notebook.
 * At the end of the week, they would like to know the number of miles run each day, the total miles for the week,
 * and average miles run each day. Write a program to help them analyze their data. Your program must contain
 * parallel arrays: an array to store the names of the runners and a two-dimensional array of five rows and
 * seven columns to store the number of miles run by each runner each day. Furthermore, your program must:
 *  1. Read and store the runners’ names
 *  2. Initialize and store the numbers of miles run each day.
 *  3. Find the total miles run by each runner and the average number of miles run each day.
 *  4. Output the results: runnerName: milesDay1 milesDay2 milesDay3 milesDay4 milesDay5
 *      milesDay6 milesDay7
 *
 * Author: Paul Watts
 * Date: 23/09/2022
 *
 */

#include <stdio.h>

int main() {
    // Initialize and store the runners’ names
    char runners[5][20] = {"Jason", "Samantha", "Ravi", "Sheila", "Ankit"};
    // Initialize and store the numbers of miles run each day.
    int miles[5][7] = {{5,  6,  7,  8,  9,  10, 11},
                       {12, 13, 14, 15, 16, 17, 18},
                       {19, 20, 21, 22, 23, 24, 25},
                       {26, 27, 28, 29, 30, 31, 32},
                       {33, 34, 35, 36, 37, 38, 39}};
    // Find the total miles run by each runner and the average number of miles run each day.
    int totalMiles[5] = {0, 0, 0, 0, 0};
    int averageMiles[5] = {0, 0, 0, 0, 0};
    int i, j;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 7; j++) {
            totalMiles[i] += miles[i][j];
            averageMiles[i] = totalMiles[i] / 7;
        }
    }
    // Output the results: runnerName: milesDay1 milesDay2 milesDay3 milesDay4 milesDay5 milesDay6 milesDay7
    for (i = 0; i < 5; i++) {
        printf("%s: ", runners[i]);
        for (j = 0; j < 7; j++) {
            printf("%d ", miles[i][j]);
        }
        printf("\tTotal miles: %d Average miles: %d \n", totalMiles[i], averageMiles[i]);
    }
        return 0;
}
