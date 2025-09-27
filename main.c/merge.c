#include <stdio.h>

int main()
{
    int a[50], b[50], c[100];
    int m, n;

    printf("Enter size of first array: ");
    scanf("%d", &m);

    printf("Enter elements of first array:\n");
    for (int i = 0; i < m; i++)
        scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n);

    printf("Enter elements of second array:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &b[i]);

    for (int i = 0; i < m; i++)
        c[i] = a[i];
    for (int i = 0; i < n; i++)
        c[m + i] = b[i];

    printf("Merged array:\n");
    for (int i = 0; i < m + n; i++)
        printf("%d ", c[i]);
    printf("\n");

    return 0;
}
