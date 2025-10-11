#include <stdio.h>

int main()
{

    int a, b, temp;

    printf("Enter the numbers you want to swap: ");
    scanf("%d %d", &a, &b);

    a = b;
    b = temp;
    temp = a;

    printf("After swapping:%d %d\n", a, b);
    return 0;
}