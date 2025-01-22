#include <stdio.h>

int main()
{
    int num1, num2, result;

    // Take the first integer as input
    printf("Enter an integer: ");
    scanf("%d", &num1);

    // Check if the first number is even or odd and perform the corresponding operation
    if (num1 % 2 == 0)
    {

        // Take the second integer as input
        printf("Enter another integer: ");
        scanf("%d", &num2);

        // If the number is even, add the two numbers
        result = num1 + num2;
    }
    else
    {
        // Take the second integer as input
        printf("Enter another integer: ");
        scanf("%d", &num2);

        // If the number is odd, subtract the second number from the first
        result = num1 - num2;
    }

    // Print the result
    printf("Result: %d\n", result);

    return 0;
}
