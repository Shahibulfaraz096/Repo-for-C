
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee
{
    int ID;
    char Name[50];
    float salary;
};

void clear_stdin(void)
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
    {
    }
}

void addEmployee(struct Employee **arr, int *count, int *cap)
{
    if (*count >= *cap)
    {
        *cap = (*cap == 0) ? 4 : (*cap * 2);
        *arr = realloc(*arr, (*cap) * sizeof(struct Employee));
        if (*arr == NULL)
        {
            perror("realloc");
            exit(EXIT_FAILURE);
        }
    }

    struct Employee *e = &(*arr)[*count];
    printf("Enter ID: ");
    if (scanf("%d", &e->ID) != 1)
    {
        printf("Invalid input.\n");
        clear_stdin();
        return;
    }
    clear_stdin();

    printf("Enter Name: ");
    if (fgets(e->Name, sizeof(e->Name), stdin) == NULL)
    {
        e->Name[0] = '\0';
    }
    else
    {
        size_t ln = strlen(e->Name);
        if (ln > 0 && e->Name[ln - 1] == '\n')
            e->Name[ln - 1] = '\0';
    }

    printf("Enter Salary: ");
    if (scanf("%f", &e->salary) != 1)
    {
        printf("Invalid salary.\n");
        clear_stdin();
        return;
    }
    clear_stdin();

    (*count)++;
    printf("Employee added.\n");
}

void listEmployees(const struct Employee *arr, int count)
{
    if (count == 0)
    {
        printf("No employees.\n");
        return;
    }
    printf("\n---Employee List---\n");
    for (int i = 0; i < count; i++)
    {
        printf("%d: ID=%d Name=\"%s\" Salary=%.2f\n", i, arr[i].ID, arr[i].Name, arr[i].salary);
    }
}

int findByID(const struct Employee *arr, int count, int id)
{
    for (int i = 0; i < count; i++)
    {
        if (arr[i].ID == id)
            return i;
    }
    return -1;
}

void searchEmployee(const struct Employee *arr, int count)
{
    if (count == 0)
    {
        printf("No employees to search.\n");
        return;
    }
    int id;
    printf("Enter ID to search: ");
    if (scanf("%d", &id) != 1)
    {
        printf("Invalid input.\n");
        clear_stdin();
        return;
    }
    clear_stdin();
    int idx = findByID(arr, count, id);
    if (idx >= 0)
    {
        printf("Found: ID=%d Name=\"%s\" Salary=%.2f\n", arr[idx].ID, arr[idx].Name, arr[idx].salary);
    }
    else
    {
        printf("Employee with ID %d not found.\n", id);
    }
}

void saveToFile(const struct Employee *arr, int count, const char *path)
{
    FILE *f = fopen(path, "wb");
    if (!f)
    {
        perror("fopen");
        return;
    }
    if (fwrite(&count, sizeof(count), 1, f) != 1)
    {
        perror("fwrite");
        fclose(f);
        return;
    }
    if (count > 0)
    {
        if (fwrite(arr, sizeof(struct Employee), count, f) != (size_t)count)
        {
            perror("fwrite");
        }
    }
    fclose(f);
    printf("Saved %d employees to %s\n", count, path);
}

void loadFromFile(struct Employee **arr, int *count, int *cap, const char *path)
{
    FILE *f = fopen(path, "rb");
    if (!f)
    {
        perror("fopen");
        return;
    }
    int fileCount = 0;
    if (fread(&fileCount, sizeof(fileCount), 1, f) != 1)
    {
        perror("fread");
        fclose(f);
        return;
    }
    struct Employee *tmp = malloc(fileCount * sizeof(struct Employee));
    if (fileCount > 0 && tmp == NULL)
    {
        perror("malloc");
        fclose(f);
        return;
    }
    if (fileCount > 0)
    {
        if (fread(tmp, sizeof(struct Employee), fileCount, f) != (size_t)fileCount)
        {
            perror("fread");
            free(tmp);
            fclose(f);
            return;
        }
    }
    fclose(f);

    free(*arr);
    *arr = tmp;
    *count = fileCount;
    *cap = fileCount;
    printf("Loaded %d employees from %s\n", *count, path);
}

int main()
{
    struct Employee *employees = NULL;
    int count = 0, cap = 0;
    const char *storage = "employees.dat";

    while (1)
    {
        printf("\nEmployee Portal\n");
        printf("1) Add employee\n");
        printf("2) List employees\n");
        printf("3) Search by ID\n");
        printf("4) Save to file\n");
        printf("5) Load from file\n");
        printf("6) Exit\n");
        printf("Enter choice: ");

        int choice;
        if (scanf("%d", &choice) != 1)
        {
            printf("Invalid input.\n");
            clear_stdin();
            continue;
        }
        clear_stdin();

        switch (choice)
        {
        case 1:
            addEmployee(&employees, &count, &cap);
            break;
        case 2:
            listEmployees(employees, count);
            break;
        case 3:
            searchEmployee(employees, count);
            break;
        case 4:
            saveToFile(employees, count, storage);
            break;
        case 5:
            loadFromFile(&employees, &count, &cap, storage);
            break;
        case 6:
            free(employees);
            printf("Exiting.\n");
            return 0;
        default:
            printf("Invalid choice.\n");
        }
    }
}