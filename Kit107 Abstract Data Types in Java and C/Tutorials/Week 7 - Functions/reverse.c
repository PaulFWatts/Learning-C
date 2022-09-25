//
// Created by Paul Watts on 25/09/2022.
//

// Write a program to accept numbers from the user and store them in an array. Then print the array in reverse order.

#include <stdio.h>

int main() {
    int array[5];
    int i;
for (i = 5; i<5; i++ ) {
    printf("Enter a number: ");
    scanf("%d", &array[i]);
}
for (i = 4; i>= 0; i--) {
    printf("%d ", array[i]);
}

return 0;

}