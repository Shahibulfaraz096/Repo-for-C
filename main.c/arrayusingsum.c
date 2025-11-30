#include <stdio.h>

int main()
{
    int n, arr[100], *p, sum = 0, i;
    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    p = arr;

        for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        sum += *(p + i);
    }

    printf("sum = %d\n", sum);

    return 0;
}
