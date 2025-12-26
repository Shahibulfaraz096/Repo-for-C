#include <stdio.h>

int main()
{
    FILE *file;
    int ch;

    file = fopen("input.txt", "r");

    if (file == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    printf("File contents:\n");
    printf("--------------\n");

    while ((ch = fgetc(file)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(file);
    return 0;
}
