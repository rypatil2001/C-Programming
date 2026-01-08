
// Selection: if-else
// Checks whether the entered number is even or odd using if-else



#include <stdio.h>

int main()
{
    int No = 0;

    printf("Enter number\n");
    scanf("%d", &No);

    if ((No % 2) == 0)
    {
        printf("The number is even");
    }
    else
    {
        printf("The number is odd");
    }

    return 0;
}
