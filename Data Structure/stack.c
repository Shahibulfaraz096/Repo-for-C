#include <stdio.h>
#define MAX 5

int stack[MAX];
int top = -1;

void push();
void pop();
void display();

int main()
{
    int choice;

    while (1)
    {
        printf("\n\n........Stack operations using Array........\n");
        printf("1. Push (Insert)\n");
        printf("2. Pop (Delete)\n");
        printf("3. Display Stack\n");
        printf("4. Exit\n");
        printf(".............................................\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Exiting Program...\n");
            return 0;
        default:
            printf("Invalid choice! Please try again.\n");
        }
    }
}

void push()
{
    int item;

    if (top == MAX - 1)
    {
        printf("Stack Overflow! Cannot insert more elements.\n");
    }
    else
    {
        printf("Enter the element to push: ");
        scanf("%d", &item);
        top++;
        stack[top] = item;
        printf("%d pushed into the stack.\n", item);
    }
}

void pop()
{
    if (top == -1)
    {
        printf("Stack Underflow! No elements to pop.\n");
    }
    else
    {
        printf("Element popped: %d\n", stack[top]);
        top--;
    }
}

void display()
{
    if (top == -1)
    {
        printf("Stack is empty.\n");
    }
    else
    {
        printf("Current Stack Elements:\n");
        for (int i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}
