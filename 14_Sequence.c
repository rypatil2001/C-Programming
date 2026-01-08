// Sequence means executing statements one after another in a fixed order.
// There is no specific syntax for sequence.

#include <stdio.h>

int main()
{
    int No1 = 0, No2 = 0, Ans = 0;

    printf("Enter first number\n");
    scanf("%d", &No1);

    printf("Enter second number\n");
    scanf("%d", &No2);

    Ans = No1 + No2;

    printf("Addition is: %d\n", Ans);

    return 0;
}

/*
In the above application, all the steps used to perform
the addition are executed in sequence.

scanf:
This function is used to accept input from the user through
the input device, i.e., the keyboard.
This function is declared in the 'stdio.h' header file.
*/
