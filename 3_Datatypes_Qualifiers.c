/*

                           Data type Qualifiers

Data type quantifiers are considered as such keywords which applies the new quality 
to an existing data type.

1. Constant: const
   If we use 'const' keyword before the variable creation then the value 
   of that variable remains unchanged throughout the execution of a program.
   If we try to change the value of constant variable the compiler will generate error.
   The concept of constant is applicable to all data types.

2. Volatile: volatile
   The concept of volatile is not used in the todays advanced compilers. 
   If we write a'volatile' keyword before the name of variale then we inform the 
   compiler that we don't want any optimization.

*/

#include<stdio.h>

int main()
{
    int A = 10;

    const int B = 20;

   A++;                 // ++ is an increment operator
   printf("A = %d", A); // A = 11

// B++;    // generates an error, B is Qualified as a constant and cant be changed

    return 0;

}