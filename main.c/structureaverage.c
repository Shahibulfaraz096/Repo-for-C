#include <stdio.h>

struct Student
{
    char name[50];
    int roll;
    float marks;
};

int main()
{
    struct Student s;
    float total = 0, avg;
    int i;

    printf("Enter name: ");
    scanf("%s", s.name);
    printf("Enter Roll: ");
    scanf("%d", &s.roll);

    printf("Enter the marks in 3 objects: \n");
    for (i = 0; i < 3; i++)
    {
        scanf("%f", &s.marks);
        total += s.marks;
    }

    avg = total / 3;

    printf("Total = %.2f\nAverage = %.2f\n", total, avg);
    return 0;
}