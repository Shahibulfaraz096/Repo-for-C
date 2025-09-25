#include <stdio.h>

int main()
{
    float payment, age;
    float tax;

    printf("Enter the payment: ");
    scanf("%f", &payment);

    printf("Enter your age: ");
    scanf("%f", &age);

    if (age < 18)
    {
        printf("No tax, you are under 18.\n");
    }
    else
    {
        if (payment <= 1000)
        {
            tax = payment * 0.05;
        }
        else if (payment <= 5000)
        {
            tax = payment * 0.10;
        }
        else
        {
            tax = payment * 0.15;
        }
        printf("Your tax is: %.2f\n", tax);
    }

    return 0;
}
