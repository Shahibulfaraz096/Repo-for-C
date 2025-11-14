#include <stdio.h>

struct Student
{
    char name[50];
    int roll;
    float marks;
};

int main()
{
    int n, i, pos = 0;
    struct Student s[100];

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\nEnter name, roll, marks: ");
        scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);
    }

    for (i = 1; i < n; i++)
    {
        if (s[i].marks > s[pos].marks)
            pos = i;
    }

    printf("\nTopper: %s with %.2f marks\n", s[pos].name, s[pos].marks);

    return 0;
}
