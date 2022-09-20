// Simple array to calculate the Average of Quiz for ten students
// Created by Paul Watts on 21/09/22.
//

#include <stdio.h>


int main() {
    int avg, sum = 0;
    int i;
    int quiz[10]; // array of 10 integers

    for (i = 0; i < 10; i++) {
        printf("\nEnter the marks of student %d: ", i + 1);
        scanf("%d", &quiz[i]); // read the marks of student i
    }

    for (i = 0; i < 10; i++) {
        sum = sum + quiz[i]; // sum the marks of all students
    }

    avg = sum / 10; // calculate the average
    printf("\nAverage marks of the class = %d", avg);


    return 0;
}
