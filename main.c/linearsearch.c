#include <stdio.h>

int main()
{
    int arr[100], n, key, i, found = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter your desired items sequentially:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            printf(" Search item found at %d.\n", key, i + 1);
            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}
