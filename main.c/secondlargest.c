#include <stdio.h>

int main()
{
    int arr[100], n, first, second;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    first = second = -99999;

    for (int i = 0; i < n; i++)
        if (arr[i] > first)
        {
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second && arr[i] != first)
            second = arr[i];

    printf("Second largest element = %d\n", second);
    return 0;
}