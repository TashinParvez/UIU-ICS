#include <stdio.h>

int main()
{
    int age;
    float weight, height, bmi;

    // Take input from the user
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter weight (kg): ");
    scanf("%f", &weight);
    printf("Enter height (m): ");
    scanf("%f", &height);

    // Calculate BMI
    bmi = weight / (height * height);
    

    // Print BMI value
    printf("Your BMI is %.2f.\n", bmi);


    // Determine and print BMI category
    if (bmi < 18.5)
    {
        printf("Underweight\n");
    }
    else if (bmi >= 18.5 && bmi <= 24.9)
    {
        printf("Normal weight\n");
    }
    else if (bmi >= 25.0 && bmi <= 29.9)
    {
        printf("Overweight\n");
    }
    else
    {
        printf("Obese\n");
    }

    return 0;
}
