#include <stdio.h>

int main()
{
    FILE *file;
    char text[1000];

    file = fopen("output.txt", "w");

    if (file == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter text to write to file (ctrl+Z to end):\n");

    while (fgets(text, sizeof(text), stdin) != NULL)

    {
        fputs(text, file);
    }

    fclose(file);
    printf("Text written to file sucessfully!\n");

    return 0;
}