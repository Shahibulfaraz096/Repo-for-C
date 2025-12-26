#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    FILE *file;
    struct Student s;
    int n, i;

    file = fopen("students.dat", "wb");

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\nStudent %d:\n", i + 1);
        printf("Roll: ");
        scanf("%d", &s.roll);
        printf("Name: ");
        scanf(" %[^\n]", s.name);
        printf("Marks: ");
        scanf("%f", &s.marks);

        fwrite(&s, sizeof(struct Student), 1, file);
    }

    fclose(file);

    file = fopen("students.dat", "rb");

    printf("\n\nStudent Records: \n");
    printf("Roll\tName\t\tMarks\n");
    printf("---------------------------\n");

    while (fread(&s, sizeof(struct Student), 1, file))
    {
        printf("%d\t%s\t%.2f", s.roll, s.name, s.marks);
    }

    fclose(file);
    return 0;
}