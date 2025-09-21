#include <stdio.h>

int main()
{
    float x;
    float result;

    printf("Enter the value of X: ");
    scanf("%f", &x);

    if (x < 0)
    {
        result = 2 * x;
    }
    else if (x < 2)
    {
        result = x * x - 1;
    }
    else if (x < 5)
    {
        result = 3 * x * x + 2;
    }
    printf("Output:%f\n", result);
    return 0;
}