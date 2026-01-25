/*
Multi-Dimensional Array:

A multi-dimensional array is considered as an array of arrays.

A two-dimensional array consists of rows and columns.
Each row itself is a one-dimensional array.

Example:
int Arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

Here:
- Arr is a two-dimensional array
- It contains 3 one-dimensional arrays (rows)
- Each one-dimensional array contains 4 integer elements
- All elements are of type integer

We can also initialize a multi-dimensional array using
member-by-member initialization.

Example:

Arr[0][0] = 1;
Arr[0][1] = 2;
Arr[0][2] = 3;
Arr[0][3] = 4;

Arr[1][0] = 5;
Arr[1][1] = 6;
Arr[1][2] = 7;
Arr[1][3] = 8;
*/

#include <stdio.h>

int main()
{
    int Arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    printf("%d\n", Arr);
    printf("%d\n", &Arr);
    printf("%d\n", &(Arr[0][0]));
    printf("%d\n", &(Arr[1][0]));
    printf("%d\n", &(Arr[2][0]));

    printf("%d\n", Arr[0][0]); // 1
    printf("%d\n", Arr[0][1]); // 2
    printf("%d\n", Arr[0][2]); // 3
    printf("%d\n", Arr[0][3]); // 4

    printf("%d\n", Arr[1][0]); // 5
    printf("%d\n", Arr[1][1]); // 6
    printf("%d\n", Arr[1][2]); // 7
    printf("%d\n", Arr[1][3]); // 8

    printf("%d\n", Arr[2][0]); // 9
    printf("%d\n", Arr[2][1]); // 10
    printf("%d\n", Arr[2][2]); // 11
    printf("%d\n", Arr[2][3]); // 12
}
