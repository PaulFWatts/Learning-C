/* Solution to Problem: 9| Calculate date of birth, in ddmmyyyy format,  in years months and days
 *
 * Write a program that asks the user to enter his or her date of birth and
 * then displays the age in years, months and days. For simplicity, assume
 * a year has 365 days based on the last calculated month is October 2020.

    Author: Paul Watts
    Date:   10th September 2022

*/

#include <stdio.h>

int main(void)
{
    int day = 0; // The day of the month
    int month = 0; // The month of the year
    int year = 0; // The year
    int age = 0; // The age in years
    int months = 0; // The age in months
    int days = 0; // The age in days

    printf("Please enter your date of birth in the format ddmmyyyy: ");
    scanf("%2d%2d%4d", &day, &month, &year);

    // Calculate the age in years based on year 2020
    age = 2020 - year;

    // Calculate the age in months based on October
    months = 10 - month;

    // Calculate the age in days based on end of October
    days = 31 - day;

    printf("Your age is %d years, %d months and %d days\n", age, months, days);

    return 0;
}



