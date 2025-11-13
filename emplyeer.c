#include <stdio.h>

struct Employee
{
    int ID;
    char Name[50];
    float salary;
};

int main()
{
    struct Employee e;

    printf("Enter ID: ");
    scanf("%d", &e.ID);
    printf("Enter Name: ");

    scanf("%49s", e.Name);
    printf("Enter Salary: ");
    scanf("%f", &e.salary);

    printf("\n---Employee Information---\n");
    printf("ID: %d\nName: %s\nSalary: %f\n", e.ID, e.Name, e.salary);

    return 0;
}