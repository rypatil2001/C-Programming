/*
Selection: switch case:
The concept of switch case is used to select the expected
things from the set of multiple things.

Switch cases uses concept of jump table.
We have created a table of cases, it directly jumps to
that case instead of checking all cases or conditions.

Switch case can olny be used for integer and character.
*/

// a menu-driven calculator.


#include <stdio.h>

int main()
{
    int choice;
    float num1, num2, result;

    // Display menu to the user
    printf("----- Simple Calculator -----\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    // Taking input numbers
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    // switch case to select operation
    switch (choice)
    {
        case 1:
            result = num1 + num2;
            printf("Result = %.2f", result);
            break;

        case 2:
            result = num1 - num2;
            printf("Result = %.2f", result);
            break;

        case 3:
            result = num1 * num2;
            printf("Result = %.2f", result);
            break;

        case 4:
            if (num2 != 0)
            {
                result = num1 / num2;
                printf("Result = %.2f", result);
            }
            else
            {
                printf("Error: Division by zero is not allowed");
            }
            break;

        default:
            printf("Invalid choice! Please select between 1 to 4");
    }

    return 0;
}


