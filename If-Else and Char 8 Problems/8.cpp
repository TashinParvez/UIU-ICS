#include <stdio.h>

int main()
{
    int num1;

    // Take the first integer as input
    printf("Enter an integer: ");
    scanf("%d", &num1);

    // Check if the number is divisible by 3
    if (num1 % 3 == 0)
    {

        int num2;

        // Take another integer as input and multiply it with the first number
        printf("Enter another integer: ");
        scanf("%d", &num2);

        num1 = num1 * num2;
    }

    // Check if the number is divisible by 5
    if (num1 % 5 == 0)
    {
        int num3;
        // Take another integer as input and add it to the result from step (a)
        printf("Enter another integer: ");
        scanf("%d", &num3);
        num1 += num3;
    }

    // Check if the number is odd or even
    if (num1 % 2 != 0)
    {
        // If the number is odd, increment it by 1
        num1 += 1;
    }
    else
    {
        // If the number is even, decrement it by 1
        num1 -= 1;
    }

    // Print the final num1
    printf("Result: %d\n", num1);

    return 0;
}
