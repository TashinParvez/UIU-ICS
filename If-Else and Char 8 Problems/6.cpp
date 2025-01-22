#include <stdio.h>

int main()
{
    char ch;

    // Take input from the user
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is a lowercase letter
    if (ch >= 'a' && ch <= 'z')
    {
        printf("%c is a lowercase letter.\n", ch);
    }
    // Check if the character is an uppercase letter
    else if (ch >= 'A' && ch <= 'Z')
    {
        printf("%c is an uppercase letter.\n", ch);
    }
    // Check if the character is a digit
    else if (ch >= '0' && ch <= '9')
    {
        printf("%c is a digit.\n", ch);
    }
    // If it's neither an alphabet nor a digit, it's a special character
    else
    {
        printf("%c is a special character.\n", ch);
    }

    return 0;
}
