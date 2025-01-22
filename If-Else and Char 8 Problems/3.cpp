#include <stdio.h>

int main()
{
    int marks1, marks2, marks3;
    int pass_count = 0;

    // Take input from the user for marks in three subjects
    printf("Marks in Subject 1: ");
    scanf("%d", &marks1);
    printf("Marks in Subject 2: ");
    scanf("%d", &marks2);
    printf("Marks in Subject 3: ");
    scanf("%d", &marks3);

    // Check for passing marks (>= 40) in each subject
    if (marks1 >= 40)
    {
        pass_count++;
    }
    if (marks2 >= 40)
    {
        pass_count++;
    }
    if (marks3 >= 40)
    {
        pass_count++;
    }

    // Check if the student has passed at least 2 subjects
    if (pass_count >= 2)
    {
        printf("You have passed.\n");
    }
    else
    {
        printf("You have failed.\n");
    }

    return 0;
}
