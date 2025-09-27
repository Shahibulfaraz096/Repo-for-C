#include <stdio.h>

int main()
{
    int arr[100], n, sum = 0;
    float avg;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    avg = (float)sum / n;
    printf("sum = %d\nAverage = %.2f\n", sum, avg);
    return 0;
}