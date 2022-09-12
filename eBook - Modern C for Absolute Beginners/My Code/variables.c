#include <stdio.h>

int main (void)
{
    /* Variables declared inside the main function are local variables 
        local variables are not initialised by default and containg random values*/
    char mychar; // Stores a single character
    int myint; // Stores an integer
    float myfloat; // Stores a floating point number
    double mydouble; // Stores a double precision floating point number
    char mystring[20]; // Stores a string of characters
    char mystring2[20] = "Hello World"; // Stores a string of characters
    char mystring3[] = "Hello World"; // Stores a string of characters
    
    mychar ='a'; // Stores a single character
    mychar = 97; // Stores a single character using Ascii code for 'a'

    myint = 10; // Stores an integer
    myfloat = 10.5; // Stores a floating point number
    mydouble = 10.789567237134582; // Stores a double precision floating point number
    mystring[0] = 'H'; // Stores a characyter in 1st position of array

    printf("\n");
    printf("The value of mychar is: %c\n", mychar); 
    int size = sizeof(mychar);
    printf("The size in byte(s) is: %d\n", size); 
    printf("\n");

    printf("The value of myint is: %d\n", myint); 
    size = sizeof(myint);
    printf("The size in byte(s) is: %d\n", size); 
    printf("\n");

    printf("The value of myfloat is: %lf\n", myfloat); 
    size = sizeof(myfloat);
    printf("The size in byte(s) is: %d\n", size); 
    printf("\n");

    printf("The value of mydouble is: %lf\n", mydouble); 
    size = sizeof(mydouble);
    printf("The size in byte(s) is: %d\n", size); 
    printf("\n");

    printf("The value of mystring is: %s\n", mystring);
    size = sizeof(mystring);
    printf("The size in byte(s) is: %d\n", size);
    printf("\n");

    printf("The value of mystring2 is: %s\n", mystring2);
    size = sizeof(mystring2);
    printf("The size in byte(s) is: %d\n", size);
    printf("\n");

    printf("The value of mystring3 is: %s\n", mystring3);
    size = sizeof(mystring3);
    printf("The size in byte(s) is: %d\n", size);
    printf("\n");
    printf("\n");

    /* Can declare and initialise variables in the same line */
    char mychar2 = 'b';
    int myint2 = 20;
    float myfloat2 = 20.5;
    double mydouble2 = 20.789567237134582;
    char mystring4[] = "Hello World";

    printf("%c\n", mychar2); 
    printf("%d\n", myint2); // Prints the integer stored in myint2
    printf("%f\n", myfloat2); // Prints the floating point number stored in myfloat2
    printf("%lf\n", mydouble2); // Prints the double precision floating point number stored in mydouble2
    int precision = 10;
    printf("%.*lf\n", precision, mydouble2); // Prints mydouble2 to 10 digits of precision using a variable
    printf("%.*lf\n",20, mydouble2); // Prints mydouble2 to variable precision using a constant
    printf("%s\n", mystring4); // Prints the string stored in mystring4


    return 0;

}