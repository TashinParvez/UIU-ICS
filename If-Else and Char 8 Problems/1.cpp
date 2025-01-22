#include <stdio.h>

int main()
{
    int num;

    // Take input from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check the divisibility conditions
    if (num % 5 == 0 && num % 11 == 0)
    {
        printf("%d is divisible by both 5 and 11.\n", num);
    }
    else if (num % 5 == 0)
    {
        printf("%d is only divisible by 5.\n", num);
    }
    else if (num % 11 == 0)
    {
        printf("%d is only divisible by 11.\n", num);
    }
    else
    {
        printf("%d is not divisible by either 5 or 11.\n", num);
    }

    return 0;
}
