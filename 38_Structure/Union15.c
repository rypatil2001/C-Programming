#include<stdio.h>

// Union declaration
// All members share the same memory location
union Demo
{
    int no;      // 4 bytes
    double d;    // 8 bytes (largest member)
    float f;     // 4 bytes
};
  
int main()
{
    // Creating union object
    union Demo obj;

    // Size of union = size of largest member (double = 8 bytes)
    printf("%d\n", sizeof(obj));

    // Assigning value to integer member
    obj.no = 11;

    // Printing integer value
    // Valid because 'no' was the last assigned member
    printf("%d\n", obj.no);  // Output: 11

    // Assigning value to float member
    // This overwrites the same memory used by 'no'
    obj.f = 90.99;

    // Printing float value
    // Valid because 'f' is the last assigned member
    printf("%f\n", obj.f);  // Output: 90.990000

    // Note:
    // If we print obj.no here, we may get garbage value
    // because memory is now interpreted as float

    return 0;
}
