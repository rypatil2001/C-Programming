
/*
•	NULL pointer:
Null is internally considered as a Macro which is defined in stdio.h header
file as #define NULL (void*) 0

According to this syntax NULL is considered as 0 means the pointer is pointing
0th address of RAM.

*/

#include <stdio.h>

int main()
{
    int No = 11;
    int *p = NULL;
    p = &No;

    printf("%d\n", *p); // 11

    return 0;
}
