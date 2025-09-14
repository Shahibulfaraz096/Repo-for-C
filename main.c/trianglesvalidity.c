#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter 3 sides of triangles: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a)
    {
        printf("Valid Triangle.\n");
    }
    else
    {
        printf("Invalid Triangle.\n");
    }

    return 0;
}