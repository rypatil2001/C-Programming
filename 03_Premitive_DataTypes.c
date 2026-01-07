#include <stdio.h>   // Standard Input Output header file for printf(), scanf()

/*
    Program Name : Primitive Data Types Demonstration
    Description  : This program demonstrates the use of
                   basic (primitive) data types in C and
                   their respective format specifiers.
*/

int main(void)   // Program execution starts from main()
{
    /*
        Local Variable Declarations:
        --------------------------------
        no1 -> integer data type
        no2 -> floating-point data type
        d   -> double precision floating-point
        ch  -> character data type
    */

    int No1 = 10;                 // stores integer value
    float No2 = 3.123764f;        // stores decimal value (single precision)
    double D = 2.87878787878787;  // stores decimal value (double precision)
    char ch = 'A';                // stores a single character

    /*
        Printing values using printf()
        --------------------------------
        Format specifiers are used to
        define how data should be printed.
    */

    printf("Integer   : %d\n", No1);     // %d -> int

    printf("Float     : %f\n", No2);     // %f -> float
    printf("Float(2)  : %.2f\n", No2);   // prints float up to 2 decimal places

    printf("Double    : %lf\n", D);      // %lf -> double
    printf("Double(9) : %.9lf\n", D);    // prints double up to 9 decimal places

    printf("Character : %c\n", ch);      // %c -> char

    /*
        Summary of Format Specifiers:
        --------------------------------
        %d  -> int
        %f  -> float
        %lf -> double
        %c  -> char
    */

    return 0;   // Returns 0 to the operating system indicating successful execution
}
