/*  2 Dimensional Arrays
    Entered by Paul Watts on 23/09/22.
*/

#include <stdio.h>

int main( ) {
    int stud[4][2]; // 2D array declaration
    int i, j; // loop variables

for (i = 0; i <= 3; i++ )
{
    printf ( "\n Enter roll no. and marks" );
    scanf ( "%d %d", &stud[i][0], &stud[i][1]);
}
for (i = 0; i <= 3; i++ )
{
    printf("\n%d %d", stud[i][0], stud[i][1]);
}
return 0;
}


