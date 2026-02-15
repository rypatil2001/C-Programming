//Program to Demonstrate Nested Structure (Structure Within Structure) in C

#include<stdio.h>

struct Demo
{
    int i;     // 4 bytes
    float f;   // 4 bytes
};

struct Hello
{
    int no;           // 4 bytes
    int x;            // 4 bytes
    struct Demo dobj; // nested structure
};


int main()
{
    struct Hello hobj;

    return 0;
}

/*

hobj
┌──────────┬──────────┬──────────────────────────┐
│ no       │ x        │        dobj              │
│          │          ┌──────────┬──────────┐    │
│          │          │ i        │ f        │    │
└──────────┴──────────┴──────────┴──────────┘────┘

*/
