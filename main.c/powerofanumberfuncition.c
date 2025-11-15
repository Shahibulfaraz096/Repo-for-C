#include <stdio.h>

int power(int base, int exp)
{
    int result = 1;
    for (int i = 1; i <= exp; i++)
        result *= base;
    return result;
}

int main()
{
    int b, e;
    printf("Enter the base and exponent: ");
    scanf("%d %d", &b, &e);

    printf("Result = %d\n", power(b, e));
    return 0;
}