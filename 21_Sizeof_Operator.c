/*
Sizeof Operator (sizeof):
Sizeof is an inbuilt operator of C and C++.
This operator gives the number of bytes allocated or which can be allocated in future.
It returns the number of bytes required to store a variable or data type in memory.
Does not evaluate the variable, only checks its type.
*/

#include <stdio.h>

int main()
{
    int A = 10;

    float B = 120.5;

    double C = 73674.476;

    char D = 'a';

    printf("Size of integer A is %zu bytes\n", sizeof(A));
    printf("Size of float B is %zu bytes\n", sizeof(B));
    printf("Size of double C is %zu bytes\n", sizeof(C));
    printf("Size of character D is %zu bytes\n\n", sizeof(D));
  
}
/*
Size of integer A is 4 bytes
Size of float B is 4 bytes
Size of double C is 8 bytes
Size of character D is 1 byte


Why %zu?
%z → length modifier for size_t
u → unsigned integer

The sizeof operator does NOT return int.
It returns a value of type size_t.

Works on:   Variables
            Data types
            Arrays
            Structures
            Pointers
            Memory size depends on system architecture (32-bit / 64-bit).
            
| Data Type | Size (bytes) |
| --------- | ------------ |
| char      | 1            |
| int       | 4            |
| float     | 4            |
| double    | 8            |

Sizes depend on compiler & architecture
✔ Addresses differ because each variable occupies different memory locations
 

*/
