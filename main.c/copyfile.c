#include <stdio.h>

int main()
{
    FILE *source, *dest;
    int ch; /* use int so EOF can be detected */

    source = fopen("source.txt", "r");
    dest = fopen("destination.txt", "w");

    if (source == NULL || dest == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    while ((ch = fgetc(source)) != EOF)
    {
        fputc(ch, dest);
    }

    fclose(source);
    fclose(dest);

    printf("File copied successfully!\n");
    return 0;
}
