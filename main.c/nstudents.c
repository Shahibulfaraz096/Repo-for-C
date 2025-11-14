// ...existing code...
#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100
#define NAME_LEN 50

struct Student
{
    char name[NAME_LEN];
    int roll;
    float marks;
};

static void clear_stdin(void)
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
    {
    }
}

static void trim_newline(char *s)
{
    size_t ln = strlen(s);
    if (ln > 0 && s[ln - 1] == '\n')
        s[ln - 1] = '\0';
}

int main()
{
    struct Student s[MAX_STUDENTS];
    int i, n;

    printf("Enter the number of students (1-%d): ", MAX_STUDENTS);
    if (scanf("%d", &n) != 1 || n < 1 || n > MAX_STUDENTS)
    {
        printf("Invalid number of students.\n");
        return 1;
    }
    clear_stdin();

    for (i = 0; i < n; i++)
    {
        printf("\nEnter name: ");
        if (fgets(s[i].name, sizeof(s[i].name), stdin) == NULL)
            s[i].name[0] = '\0';
        trim_newline(s[i].name);

        while (1)
        {
            printf("Enter roll and marks: ");
            if (scanf("%d %f", &s[i].roll, &s[i].marks) == 2)
            {
                clear_stdin();
                break;
            }
            printf("Invalid input, try again.\n");
            clear_stdin();
        }
    }

    printf("\n--- Student Information ---\n");
    for (i = 0; i < n; i++)
    {
        printf("\nStudent %d:\n", i + 1);
        printf("Name  : %s\n", s[i].name);
        printf("Roll  : %d\n", s[i].roll);
        printf("Marks : %.2f\n", s[i].marks);
    }

    return 0;
}