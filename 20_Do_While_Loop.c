/*
Do-While Loop:
The do-while loop is syntactically similar to the while loop.
The key difference is that the do-while loop executes the loop body
at least once before checking the condition.

The condition is evaluated after the execution of the loop body.
*/

#include <stdio.h>

int main()
{
    int iCnt = 0;
    // Loop executes at least once
    do
    {
        printf("This is a do-while loop\n");
        iCnt++;
    }
    while (iCnt < 4);

    return 0;
}

/*
Explanation:
- The program prints the given message 4 times.
- The loop body is executed once before the condition is checked.
- After the first iteration, the condition is evaluated before
  each subsequent execution.
- 'iCnt' acts as a loop counter and is incremented inside the loop.

Key Characteristics:
- do-while loop guarantees at least one execution.
- The condition is checked at the end of the loop.
- Useful when the loop body must run at least once.

Use Case Hint:
- do-while loops are commonly used in menu-driven programs
  and data structures such as circular linked lists,
  where at least one traversal or operation is required.
*/
