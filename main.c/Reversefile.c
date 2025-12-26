#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *source, *dest;
    char ch;
    long length;

    source = fopen("source.txt", "r");
    dest = fopen("reversed.txt", "w");

    if (source == NULL || dest == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    fseek(source, 0, SEEK_END);
    length = ftell(source);

    for (long i = length - 1; i >= 0; i--)
        fseek(source, i, SEEK_SET);
    ch = fgetc(source);
    fputc(ch, dest);

    fclose(source);
    fclose(dest);

    printf("File reversed successfully!\n");
    return 0;
}
