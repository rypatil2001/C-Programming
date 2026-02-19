// Self-Referencing Structure Example in C

#include<stdio.h>

struct Demo
{
    int no;
    struct Demo *ptr;
};

int main()
{
    struct Demo obj1;
    
    obj1.no = 11;
    obj1.ptr = NULL;

    return 0;
}


/* 
If 32-bit System
int = 4 bytes
Pointer = 4 bytes
No padding needed

1000  +------------+
      |  no = 11   |   (4 bytes)
1004  +------------+
      |  ptr = 0   |   (4 bytes)
1008  +------------+


*/
