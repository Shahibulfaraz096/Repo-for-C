#include <stdio.h>

int main()
{
    FILE *file;
    int ch;
    int lines = 0;
    int has_char = 0;

    file = fopen("input.txt", "r");
    if (file == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF)
    {
        has_char = 1;
        if (ch == '\n')
            lines++;
    }

    if (has_char)
        lines++;

    fclose(file);

    printf("Number of lines: %d\n", lines);
    return 0;
}
