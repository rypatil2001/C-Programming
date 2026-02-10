#include<stdio.h>

struct Hello
{
    int no;
    int x;
    struct Demo
    {
        int i;
        float f;
    }dobj1,dobj2;
}hobj;

int main()
{
    hobj.no = 10;
    hobj.x = 20;

    hobj.dobj1.i = 30;
    hobj.dobj1.f = 40.0;

    hobj.dobj2.i = 50;
    hobj.dobj2.f = 60.0;
    
    return 0;
}

/*

hobj
┌──────────┬──────────┬────────────────┬────────────────┐
│ no = 10  │ x = 20   │    dobj1       │     dobj2      │
│          │          ┌────────┬──────┐┌────────┬──────┐|
│          │          │ i = 30 │ f=40 ││ i = 50 │ f=60 │|
└──────────┴──────────┴────────┴──────┴┴────────┴──────┘┘


*/
