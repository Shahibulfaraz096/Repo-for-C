#include <stdio.h>

int main()
{
        int n, i, new_item, my_queue[100];

        printf("Enter the number of items: ");
        scanf("%d", &n);
        printf("Enter your desired items sequentially:\n");

        for (i = 0; i < n; i++)
    {
                scanf("%d", &my_queue[i]);
           
    }

        printf("Current queue:\n");

        for (i = 0; i < n; i++)
    {
                if (i == n - 1)
        {
                        printf("%d", my_queue[i]);
                   
        }
                else
        {
                        printf("%d, ", my_queue[i]);
                   
        }
           
    }

        /*printf("\nEnter the new item: ");
        scanf("%d", &new_item);
        my_queue[n] = new_item;
        printf("Queue after enqueue: ");

        for (i = 0; i <= n; i++) {
            if (i == n) {
                printf("%d", my_queue[i]);
            }
            else {
                printf("%d, ", my_queue[i]);
            }
        }*/

    printf("\nPerforming dequeue operation...");

        for (i = 0; i < n; i++)
    {
                my_queue[i] = my_queue[i + 1];
           
    }

        printf("\nQueue after dequeue: ");

        for (i = 0; i < n - 1; i++)
    {
                if (i == n - 2)
        {
                        printf("%d", my_queue[i]);
                   
        }
                else
        {
                        printf("%d, ", my_queue[i]);
                   
        }
           
    }

        return 0;
}