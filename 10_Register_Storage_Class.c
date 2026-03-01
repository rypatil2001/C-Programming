/*

•	Register Storage Class:
1.	Register storage class is almost similar as the auto storage class.
2.	In case of auto storage class, the memory for the variable gets allocated inside the stack segment which is the part of RAM.
3.	To access any variable from the RAM it should be copied from RAM to CPU register.
4.	If we use the register storage class the memory for the variable gets directly allocated inside the CPU registers.

•	Limitations of the register storage class :
1.	As there are limited number of CPU registers, the register storage class is considered as a request.
2.	If the CPU register is available, then the operating system is allocated the register otherwise that variable is treated with auto storage class.
3.	Register storage class is applicable for character and integer only.
4.	We cannot create a global variable with register storage class.

In C, the register storage class is used to store frequently used variables in CPU registers instead of RAM, which makes access faster.

🚀 Faster access (stored in CPU register if available)

 Local scope only (inside functions)

 Cannot use address operator (&)

 Compiler may ignore register if registers are unavailable

 Mostly used for loop counters and frequently accessed variables

SYNTAX
register data_type variable_name;

*/

#include <stdio.h>

int main()
{
    register int iCnt;

    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        printf("%d ", iCnt);
    }

    return 0;
}
/*

iCnt is used repeatedly in the loop
Declaring it as register suggests faster execution
Compiler decides whether to place it in a CPU register


| Feature              | `auto`  | `register`                  |
| -------------------- | ------- | --------------------------- |
| Default storage      | Yes     | No                          |
| Speed                | Normal  | Faster                      |
| Address access (`&`) | Allowed |  Not allowed                |
| Storage              | RAM     | CPU Register (if available) |


When to Use register?

Loop counters (i, j, k)
Variables used very frequently
Performance-critical sections

*/
