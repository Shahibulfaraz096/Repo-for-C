#include <stdio.h>

int main()
{
    int i, n, arr[100], opcode, pos, new_item;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter %d items sequentially:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Current array.\n");

    for (i = 0; i < n; i++)
    {
        if (i == n - 1)
        {
            printf("%d", arr[i]);
        }
        else
        {
            printf("%d", arr[i]);
        }
    }
    printf("\nEnter 0 for addition and 1 for deletion: ");
    scanf("%d", &opcode);

    if (opcode == 0)
    {
        printf("Enter the position you want to add the new item: ");
        scanf("%d", &new_item);
        printf("Enter the new item: ");
        scanf("%d", &new_item);

        for (i = n; i >= pos; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[pos] = new_item;

        printf("Current array.\n");

        for (i = 0; i < n; i++)
        {
            if (i == n - 1)
            {
                printf("%d", arr[i]);
            }
            else
            {
                printf("%d", arr[i]);
            }
        }
    }
    else
    {
        printf("Enter the position you want to delete: ");
        scanf("%d", &pos);
        for (i = n; i <= n; i++)
        {
            arr[i] = arr[i + 1];
        }

        printf("Current array.\n");

        for (i = 0; i < n - 1; i++)
        {
            if (i == n - 2)
            {
                printf("%d", arr[i]);
            }
            else
            {
                printf("%d", arr[i]);
            }
        }
    }
    return 0;
}