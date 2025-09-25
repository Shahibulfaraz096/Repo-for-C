#include <stdio.h>

int main()
{
    float a, b;
    char op;
    printf("Enter expression(e.g., 3 + 4): ");
    scanf("%f %c %f", &a, &op, &b);

    switch (op)
    {
    case '+':
        printf("Result: %.2f\n", a + b);
        break;
    case '-':
        printf("Result: %.2f\n", a - b);
        break;
    case '*':
        printf("Result: %.2f\n", a * b);
        break;
    case '/':
        if (b != 0)
        {
            printf("Result: %.2f\n", a / b);
        }
        else
        {
            printf("Error: Division by zero.\n");
        }
        break;
    default:
        printf("Invalid operation.\n");
    }
    return 0;
}
