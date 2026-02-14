// Program to Demonstrate Structure with Array Member and Its Memory Representation in C
#include<stdio.h>

struct Demo
{
    int i;        // 4 bytes
    float f;      // 4 bytes
    int Arr[4];   // 4 × 4 = 16 bytes
};

int main()
{
    struct Demo obj;

    obj.i = 10;
    obj.f = 90.88;

    obj.Arr[0] = 11;
    obj.Arr[1] = 21;
    obj.Arr[2] = 31;
    obj.Arr[3] = 41;
     
    return 0;
}


/*

obj
┌──────────┬──────────┬──────────┬──────────┬──────────┬──────────┐
│ i = 10   │ f = 90.88│ Arr[0]=11│ Arr[1]=21│ Arr[2]=31│ Arr[3]=41│
└──────────┴──────────┴──────────┴──────────┴──────────┴──────────┘

*/
