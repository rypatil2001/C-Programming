/*
•	Function Pointer:
Function pointer is considered as a pointer which holds the address of function.
*/

#include <stdio.h>

int Addition(int No1, int No2)
{
    int Ans = 0;
    Ans = No1 + No2;
    return Ans;
}

int main()
{
    int value1 = 10, value2 = 20;
    int Ret = 0;

    int (*ptr)(int, int);
    ptr = Addition;

    // Ret = Addition(value1,value2);

    Ret = ptr(value1, value2);

    printf("%d\n", Ret);

    return 0;
}

/*
//ptr is a pointer that holds the address of a function, that function will accept 2
parameters both are integer and the function will return integer.

In the C programming there are two things whose name contains the address in it.
Array name and function name internally considered as address of array or function.
In the above application we call the addition function using the function pointer.
In the above example 1000 is considered as the address of function from text section.
*/
