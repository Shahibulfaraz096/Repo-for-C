#include <stdio.h>

struct Student
{
    char name[50];
    int roll;
    float marks;
};

void update(struct Student *s)
{
    printf("Enter updated marks: ");
    scanf("%f", &s->marks);
}

int main()
{
    struct Student s = {"Rafi", 101, 80.0};

    printf("Before update: %.2f\n", s.marks);
    update(&s);
    printf("After update: %.2f\n", s.marks);

    return 0;
}
