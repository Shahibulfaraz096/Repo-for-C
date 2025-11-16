#include <stdio.h>

void swapValue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    printf("After swap (value): a = %d b = %d\n", a, b);
}

void swapReference(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 5, y = 10;

    printf("Before swap: x = %d y = %d\n", x, y);

    swapValue(x, y);
    printf("After call by value (main): x = %d y = %d\n", x, y);

    swapReference(&x, &y);
    printf("After call by Reference: x = %d y = %d\n", x, y);

    return 0;
}
