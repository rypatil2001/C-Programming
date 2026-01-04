/*
•	Auto Storage Class:
1.	Every local variable is considered as a variable with auto storage class, that is; auto is the default storage class for every local variable .
2.	When we create a variable having auto storage class, its memory gets allocated inside the stack section.
3.	If the variable is not initialized with any of the value then it may contain garbage in it.
4.	The scope and lifetime of the variable is only inside the function in which it gets created.
5.	The linkage of the auto storage class is no linkage because it is not accessible outside the function or file or program.

*/

#include <stdio.h>

int y;

int z = 10;

int main()
{
    int A = 10;
    int B;
    auto int C = 10;
    auto int D;

    return 0;
}

/*In the above program variable A, B, C and D are local Variables.
They are all of auto storage class.
int A and B are default auto as they are local variables.*/
