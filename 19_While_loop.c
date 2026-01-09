/*
While Loop:
A while loop is used to execute a statement or a block of statements
repeatedly as long as the specified condition remains true.

The condition is evaluated before the loop body is executed.
*/

#include <stdio.h>

int main()
{
    int iCnt = 0;

    // Loop executes while the condition is true
    while (iCnt < 4)
    {
        printf("This is a while loop program\n");
        iCnt++;
    }

    return 0;
}

/*
Explanation:
- The program prints the given message 4 times.
- 'iCnt' acts as a loop counter.
- The loop starts with iCnt = 0 and continues until the condition becomes false.
- The counter is incremented inside the loop to avoid an infinite loop.


Loop selection guideline:
- Use a while loop when the number of iterations is not known in advance.
- The loop continues based on a condition rather than a fixed count.
*/
