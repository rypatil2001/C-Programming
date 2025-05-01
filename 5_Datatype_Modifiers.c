/*Data type Modifiers

The concept of data type modifier will modify the size of data type or the type of value
that we can store in that data type.

1. Signed: signed
2. Unsigned: unsigned

   Signed and unsigned is applicable to all data types.

3. Short: short
4. Long: long

   Short and long are considered as data type modifiers which modifies the size of the variable.
   Depends on the requirement we can select either short or long. 
   Concept of short and long is not applicable to all datatypes.
   The size of short and long purely depends upon the compiler.

We can also combine the concept of data type qualifier and data type modifier 
depending upon the requirement. 

*/


#include<stdio.h>

int main()
{
    int A = 11;  // its by default signed
    
    int B = -11;  //its by default signed

    signed int C = 11;

    unsigned int D = 11;

    int E = 11;

    short int F = 11;

    long int G = 11;

    printf("Size of int C is %d\n", sizeof(C));   //sizeof() gives size assigned to that variable
    printf("Size of int D is %d\n", sizeof(D));
    printf("Size of int E is %d\n", sizeof(E));
    printf("Size of short int F is %d\n", sizeof(F));
    printf("Size of long int G is %d\n", sizeof(G));

    return 0;
}