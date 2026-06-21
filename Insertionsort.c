#include <stdio.h>

void insertionsort(int arr[], int n)
{
    for (int i = 1; i < n; ++i)
    {
        int temp = arr[i];

        int j = i - 1;

        while (j >= 0 && arr[j] > temp)

        {

            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; ++i)

        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionsort(arr, n);
    printArray(arr, n);

    return 0;
}
