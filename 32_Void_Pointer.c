/*
•	Void Pointer:
Void pointer is called as generic pointer. Void pointer is a pointer which can
store address of any data type.

*/

#include <stdio.h>

int main()
{
    char ch = 'm';
    int i = 10;
    float f = 16.27;
    double d = 98.986;

    // specific pointers:
    char *cp = &ch;
    int *ip = &i;
    float *fp = &f;
    double *dp = &d;

    // void pointer:
    void *vp = NULL;

    vp = &ch;
    printf("%c\n", *(char *)vp); // type casting

    vp = &i;
    printf("%d\n", *(int *)vp);

    vp = &f;
    printf("%f\n", *(float *)vp);

    return 0;
}

/*
- In the above example, the void pointer vp initially points to the character and
then it will point to the integer.
- If we want to fetch the data using void pointer then we must use the concept of
type casting.
- Type casting is the concept where the pointer gets converted into the other data
type for the temporary period.
*/
