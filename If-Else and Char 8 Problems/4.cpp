#include <stdio.h>

int main()
{
    int age;
    float monthly_income;
    int credit_score;

    // Take input from the user
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter monthly income: ");
    scanf("%f", &monthly_income);
    printf("Enter credit score: ");
    scanf("%d", &credit_score);

    // Check the eligibility conditions
    if (age >= 21 && age <= 60 && monthly_income >= 2000 && credit_score >= 700)
    {
        printf("You are eligible for a loan.\n");
    }
    else
    {
        printf("You are not eligible for a loan.\n");
    }

    return 0;
}
