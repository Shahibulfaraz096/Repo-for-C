#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    FILE *file;
    char word[100], fileWord[100];
    int count = 0;
    int line = 1;
    int i = 0;
    int ch;

    printf("Enter word to search: ");
    scanf("%s", word);

    file = fopen("input.txt", "r");
    if (file == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF)
    {
        if (ch == '\n')
            line++;

        if (isalnum(ch))
        {
            fileWord[i++] = ch;
        }
        else
        {
            fileWord[i] = '\0';

            if (i > 0 && strcmp(fileWord, word) == 0)
            {
                count++;
                printf("Found at line: %d\n", line);
            }
            i = 0;
        }
    }

        fileWord[i] = '\0';
    if (i > 0 && strcmp(fileWord, word) == 0)
    {
        count++;
        printf("Found at line: %d\n", line);
    }

    fclose(file);

    printf("\nTotal occurrences: %d\n", count);
    return 0;
}
