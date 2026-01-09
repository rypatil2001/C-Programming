
/*
For Loop:
A loop is used to execute a single statement or a block of statements
repeatedly. Using loops helps reduce code duplication and allows us
to write efficient and concise programs.

The for loop is preferred when the number of iterations is known in advance.
*/

#include <stdio.h>

int main()
{
    int iCnt = 0;

    // Loop executes 10 times
    for (iCnt = 0; iCnt < 10; iCnt++)
    {
        printf("Hello, this is a for loop program.\n");
    }

    return 0;
}

/*
Explanation:
- The program prints the given message 10 times.
- 'iCnt' is the loop counter that controls the number of iterations.
- The loop starts from 0 and increments by 1 until the condition becomes false.

Notes on performance and storage:
- Loop counters are typically stored in memory (auto storage class) by default.
- Modern compilers may optimize frequently used variables by placing them
  in CPU registers automatically.
- Explicit register usage is compiler- and architecture-dependent and is
  generally handled by the compiler, not the programmer.

Important:
- 'register' is a storage class specifier, not a guarantee of register allocation.
- The operating system and compiler manage CPU registers internally.

Loop selection guideline:
- Use a for loop when the number of iterations is known.
- Use a while loop when the number of iterations is unknown but condition-based.
*/
