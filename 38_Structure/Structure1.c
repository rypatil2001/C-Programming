#include <stdio.h>

/*
    Structure Definition:
    'struct Demo' is a user-defined data type that groups
    different types of data under one name.
*/
struct Demo
{
    int i;      // Integer variable
    float f;    // Floating-point variable
    int j;      // Integer variable
};

int main()
{
    /*
        Creating structure variables (objects)
        obj1 and obj2 are two separate instances of struct Demo
    */
    struct Demo obj1;
    struct Demo obj2;
    
    /*
        sizeof(obj1) gives the total memory occupied by the structure
        (including padding added by the compiler)
    */
    printf("%d\n", sizeof(obj1));

    /*
        Assigning values to members of obj1
        Dot (.) operator is used to access structure members
    */
    obj1.i = 11;
    obj1.f = 90.9;
    obj1.j = 21;

    /*
        Assigning values to members of obj2
        obj2 is independent of obj1
    */
    obj2.i = 51;
    obj2.f = 78.78;
    obj2.j = 99;
    
    /*
        Printing values of structure members
        obj1 and obj2 store their own separate data
    */
    printf("%d\n", obj1.i);  // Output: 11
    printf("%d\n", obj2.i);  // Output: 51
    
    return 0;   // Program execution ends successfully
}
