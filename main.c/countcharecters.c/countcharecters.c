
#include <stdio.h>

int main()
{
    FILE *file;
    int ch;

    long long count = 0;

    file = fopen("input.txt", "r");

    if (file == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF)
    {
        count++;
    }

    fclose(file);
    printf("Number of characters: %lld\n", count);

    return 0;
}
