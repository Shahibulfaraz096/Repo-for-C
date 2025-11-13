#include <stdio.h>

struct Student
{
    char Name[50];
    float marks;
};

int main()
{
    struct Student s[5], temp;
    int i, j;

    printf("Enter name and marks of 5 students:\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%49s %f", s[i].Name, &s[i].marks);
    }

        for (i = 0; i < 4; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (s[i].marks < s[j].marks)
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    printf("\nStudents sorted by marks (highest first):\n");
    for (i = 0; i < 5; i++)
    {
        printf("%s %.2f\n", s[i].Name, s[i].marks);
    }

    return 0;
}
