#include <stdio.h>

int main()
{
    int a, b, temp;
    int *p1 = &a, *p2 = &b;

    printf("Enter the number: ");
    scanf("%d %d", &a, &b);

    temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    printf("After Swappping: a = %d, b = %d\n", a, b);
    return 0;
}