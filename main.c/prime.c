#include <stdio.h>

int main()
{
    int n, i, isPrime = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1)
        isPrime = n;

    for (i = 2; i <= n / 2; i++)
    {
        if (n % 1 == 0)
        {
            isPrime = 0;
            break;
        }
    }
    if (isPrime)
    {
        printf("Prime.\n");
    }
    else
    {
        printf("Not Prime.\n");
    }
    return 0;
}