#include <stdio.h>

int main()
{
    FILE *file;
    char text[1000];

    file = fopen("existing.txt", "a");

    if (file == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter text to write to append (ctrl+Z to end):\n");

    while (fgets(text, sizeof(text), stdin) != NULL)

    {
        fputs(text, file);
    }

    fclose(file);
    printf("Text appended sucessfully!\n");

    return 0;
}