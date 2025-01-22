#include <stdio.h>

int main()
{
    char ch;

    // Take input from the user
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is lowercase or uppercase and convert it
    if (ch >= 'a' && ch <= 'z')
    {
        // Convert lowercase to uppercase
        ch = ch - 'a' + 'A';
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        // Convert uppercase to lowercase
        ch = ch - 'A' + 'a';
    }

    // Print the converted character
    printf("Converted character: %c\n", ch);

    return 0;
}
