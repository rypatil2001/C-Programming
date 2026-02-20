// Demonstration of Structure Padding and Memory Alignment in C

#include<stdio.h>

struct Demo
{
    int no;     // 4 bytes
    char ch;    // 1 byte
    float f;    // 4 bytes
    int i;      // 4 bytes
};


int main()
{
    struct Demo obj;

    printf("%d\n",sizeof(obj));
    
    return 0;
}

/*

1000  +------------+
      | no (4B)    |
1004  +------------+
      | ch (1B)    |
1005  | padding    |
1006  | padding    |
1007  | padding    |
1008  +------------+
      | f (4B)     |
1012  +------------+
      | i (4B)     |
1016  +------------+


*/
