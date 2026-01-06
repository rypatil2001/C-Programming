/*
Static Storage Class (C)

The static storage class is used to retain the value of a variable across function calls.

A static variable is initialized only once during the entire program execution.

Static variables can be declared inside a function (local static) or outside a function (global static).

A global static variable has file scope, meaning it is accessible only within the same source file.

Static variables are stored in the data segment of memory.


*/

#include <stdio.h>

void Demo()
{
    static int No = 10;   // Initialized only once
    No++;
    printf("%d\n", No);
}

int main()
{
    Demo(); // 11
    Demo(); // 12
    Demo(); // 13

    return 0;
}
