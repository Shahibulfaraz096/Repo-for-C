#include <stdio.h>

int main()
{

    int a, b, temp;

    printf("Enter the numbers you want to swap: ");
    scanf("%d %d", &a, &b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}