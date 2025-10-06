#include <stdio.h>

int main()
{
    int arr[100], n, key, low, high, mid;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements in sorted order:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    int found = 0;
    while (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] == key)
        {
            printf("Element %d found at index %d\n", key, mid);
            found = 1;
            break;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if (!found)
        printf("Element %d not found in the array.\n", key);

    printf("Lowest index = %d\n", 0);
    printf("Highest index = %d\n", n - 1);

    return 0;
}
